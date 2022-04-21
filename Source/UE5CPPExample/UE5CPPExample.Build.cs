// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class UE5CPPExample : ModuleRules
{
	public UE5CPPExample(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
