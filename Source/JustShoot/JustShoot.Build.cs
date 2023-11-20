// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class JustShoot : ModuleRules
{
	public JustShoot(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
