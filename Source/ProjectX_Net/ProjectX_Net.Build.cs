// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class ProjectX_Net : ModuleRules
{
	public ProjectX_Net(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
