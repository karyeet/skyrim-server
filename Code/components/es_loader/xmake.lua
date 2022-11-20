component("ESLoader")
	set_pcxxheader("stdafx.h")
	add_headerfiles("stdafx.h", {prefixdir = "ESLoader"})
	add_files("stdafx.cpp")
	add_packages("zlib", "glm")

unittest("ESLoader")
	set_pcxxheader("stdafx.h")
	add_headerfiles("stdafx.h", {prefixdir = "ESLoader"})
	add_files("stdafx.cpp")
	add_packages("zlib", "glm")