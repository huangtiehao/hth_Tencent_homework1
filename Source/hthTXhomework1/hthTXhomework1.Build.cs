// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class hthTXhomework1 : ModuleRules
{
	public hthTXhomework1(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
