#include <Structs/AnimationGraphDescriptorManager.h>
#include <Structs/Fallout4/AnimationGraphDescriptor_Radscorpion.h>



AnimationGraphDescriptor_Radscorpion::AnimationGraphDescriptor_Radscorpion(
    AnimationGraphDescriptorManager& aManager)
{
    enum Variables
    {
        kiState = 0,
        kiState_RadScorpion = 1,
        kbGraphDriven = 2,
        kbGraphDrivenRotation = 3,
        kbGraphDrivenTranslation = 4,
        kbAnimationDriven = 5,
        kbAllowRotation = 6,
        kstaggerDirection = 7,
        kstaggerMagnitude = 8,
        kiCombatLocomotionState = 9,
        kiCombatStandingState = 10,
        kiNonCombatLocomotionState = 11,
        kiNonCombatStandingState = 12,
        kiGetUpType = 13,
        kiCombatState = 14,
        kcHitReactionBodyPart = 15,
        kbManualGraphChange = 16,
        kfTimeStep = 17,
        kfSpineTwistGainAdj = 18,
        kfSpineTwistGain = 19,
        kSpineXTwist = 20,
        kSpineYTwist = 21,
        kSpineZTwist = 22,
        kfRArmTwistGainAdj = 23,
        kfRArmTwistGain = 24,
        kRArmXTwist = 25,
        kRArmYTwist = 26,
        kRArmZTwist = 27,
        kfLArmTwistGain = 28,
        kfLArmTwistGainAdj = 29,
        kLArmZTwist = 30,
        kLArmYTwist = 31,
        kLArmXTwist = 32,
        kSpineValueMinMax = 33,
        kLArmValueMinMax = 34,
        kRArmValueMinMax = 35,
        kfHitReactionEndTimer = 36,
        kbAllowHeadTracking = 37,
        kiSyncTurnState = 38,
        kiSyncIdleLocomotion = 39,
        kSpeed = 40,
        kIsAttackReady = 41,
        kbEnableAttackMod = 42,
        kDirection = 43,
        kbEquipOk = 44,
        kfRandomClipStartTimePercentage = 45,
        kTestSpeed = 46,
        kbIsSynced = 47,
        kbIsTunneling = 48,
        kiDynamicAnimSelector = 49,
        kWalkSpeedMult = 50,
        krunSpeedMult = 51,
        kiLocomotionSpeed = 52,
        kLookAtOutOfRange = 53,
        kcamerafromx = 54,
        kcamerafromy = 55,
        kcamerafromz = 56,
        kLookAtChest_Enabled = 57,
        kLookAtSpine2_Enabled = 58,
        kbFreezeSpeedUpdate = 59,
        kiIsInSneak = 60,
        kbGraphWantsFootIK = 61,
        kbRenderFirstPersonInWorld = 62,
        kPose = 63,
        kbDisableSpineTracking = 64,
        kIsPlayer = 65,
        kbBlockPOVSwitch = 66,
        kbBlockPipboy = 67,
        kbAdjust1stPersonFOV = 68,
        kiRecoilSelector = 69,
        kTurnDelta = 70,
        kIsBlocking = 71,
        kiSyncWalkRun = 72,
        krecoilShortMult = 73,
        kLookAtOutsideLimit = 74,
        kbForceIdleStop = 75,
        kbDoNotInterrupt = 76,
        kLookAtLimitAngleDeg = 77,
        kLookAtChest_LimitAngleDeg = 78,
        kLookAtNeck_LimitAngleDeg = 79,
        kLookAtHead_LimitAngleDeg = 80,
        kLookAtHead_OnGain = 81,
        kLookAtAdditive = 82,
        kbEnableRoot_IsActiveMod = 83,
        kIsNPC = 84,
        kLookAtOnGain = 85,
        kLookAtOffGain = 86,
        kbTalkableWithItem = 87,
        kiTalkGenerator = 88,
        kbFreezeRotationUpdate = 89,
        kiPcapTalkGenerator = 90,
        kSpeedSmoothed = 91,
        kTurnDeltaSmoothed = 92,
        kbIsInFlavor = 93,
    };

    uint64_t key = 18391308120865710389;

    AnimationGraphDescriptorManager::Builder s_builder(aManager, key,
        AnimationGraphDescriptor(
            {
                kIsAttackReady,
                kbEquipOk,
                kbAnimationDriven,
                kbIsTunneling,
            },
            {
                kstaggerDirection,
                kWalkSpeedMult,
                kTurnDeltaSmoothed,
                kfHitReactionEndTimer,
                kfRArmTwistGainAdj,
                kTurnDelta,
                kLArmXTwist,
                kLArmYTwist,
                kSpeed,
                kSpeedSmoothed,
                kfSpineTwistGainAdj,
                kLArmZTwist,
                kDirection,
                kfTimeStep,
                krunSpeedMult,
                kfLArmTwistGainAdj,
            },
            {
                kcHitReactionBodyPart,
                kiCombatState,
                kiRecoilSelector,
                kiSyncIdleLocomotion,
                kiLocomotionSpeed,
                kiSyncTurnState,
            }
        ));
}
