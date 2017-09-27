platform :ios, "7.0"

# Disable sending stats
ENV['COCOAPODS_DISABLE_STATS'] = 'true'

target "Psiphon Browser" do 
	pod "DTFoundation"
	pod "OrderedDictionary"
	pod "MarqueeLabel"

	pod "InAppSettingsKit", :git => "https://github.com/Psiphon-Inc/InAppSettingsKit.git", :commit => '877f342'
	#pod "InAppSettingsKit", :path => "../InAppSettingsKit"
	pod 'PsiphonClientCommonLibrary', :git => "https://github.com/Psiphon-Inc/psiphon-ios-client-common-library.git", :commit => 'a37eac8'
	#pod 'PsiphonClientCommonLibrary', :path => "../psiphon-ios-client-common-library/"
end

target "Psiphon Browser Tests" do
	pod "OCMock"
end
