// Enum MovieSceneCapture.EHDRCaptureGamut
enum class EHDRCaptureGamut : uint8 {
	HCGM_Rec709,
	HCGM_P3DCI,
	HCGM_Rec2020,
	HCGM_ACES,
	HCGM_ACEScg,
	HCGM_Linear,
	HCGM_MAX,
};

// Enum MovieSceneCapture.EMovieSceneCaptureProtocolState
enum class EMovieSceneCaptureProtocolState : uint8 {
	Idle,
	Initialized,
	Capturing,
	Finalizing,
	EMovieSceneCaptureProtocolState_MAX,
};

