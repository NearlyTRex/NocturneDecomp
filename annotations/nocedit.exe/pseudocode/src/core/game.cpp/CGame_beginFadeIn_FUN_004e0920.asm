; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_game.cpp_CGame_beginFadeIn_FUN_004e0920(CGame * this_ptr)
;
; Parameters:
; CGame *          Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_game.cpp_CGame_runGameSession_FUN_004daf80 at 004db29e
;   core_script.cpp_CScript_step_FUN_0055a810 at 0055c0a6
;
; Referenced Globals:
;   float FLOAT_0062c92d = 0.5
;   float FLOAT_0065e9b4 = 256
;   int g_WindowWidth = 0x140
;   int g_WindowHeight = 0xc8
;   CScript* g_CScriptPtr = 0310f858
;   undefined4 DAT_02d831ec
;   undefined4 DAT_02d831f0
;   undefined4 DAT_02d831f4
;   undefined4 DAT_02d831f8
;   CDemonCamera g_CDemonCameraInstance
;
; Called Functions:
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
;   core_dcamera.cpp_CDemonCamera_worldToScreenWithFrustumCull_FUN_0044d7d0
;   core_game.cpp_FUN_004e09a0
;
; *****************************************************************************

section .text

    MOV EAX,EDX                         ; 004e07d5
        ;   Label: LAB_004e07d5
    MOV EBX,dword ptr [EDX + 0x154]     ; 004e07d7
    MOV EDX,ESP                         ; 004e07dd
    PUSH EDX                            ; 004e07df
    PUSH EAX                            ; 004e07e0
    CALL dword ptr [EBX + 0x14]         ; 004e07e1
    LEA EDX,[EAX + 0xc]                 ; 004e07e4
    FLD float ptr [EAX]                 ; 004e07e7
    FADD float ptr [EDX]                ; 004e07e9
    ADD ESP,0x8                         ; 004e07eb
    FST float ptr [ESP + 0x54]          ; 004e07ee
    FLD float ptr [EAX + 0x4]           ; 004e07f2
    FADD float ptr [EDX + 0x4]          ; 004e07f5
    FXCH                                ; 004e07f8
    FLD float ptr [0x0062c92d]          ; 004e07fa | FLOAT_0062c92d
    FXCH                                ; 004e0800
    FMUL ST1                            ; 004e0802
    FXCH ST2                            ; 004e0804
    FST float ptr [ESP + 0x58]          ; 004e0806
    FLD float ptr [EAX + 0x8]           ; 004e080a
    FADD float ptr [EDX + 0x8]          ; 004e080d
    FXCH                                ; 004e0810
    FMUL ST2                            ; 004e0812
    FXCH                                ; 004e0814
    FST float ptr [ESP + 0x5c]          ; 004e0816
    FMULP ST2                           ; 004e081a
    LEA EAX,[ESP + 0x30]                ; 004e081c
    FXCH ST2                            ; 004e0820
    FSTP float ptr [ESP + 0x30]         ; 004e0822
    PUSH EAX                            ; 004e0826
    LEA EAX,[ESP + 0x28]                ; 004e0827
    FXCH                                ; 004e082b
    FSTP float ptr [ESP + 0x38]         ; 004e082d
    PUSH EAX                            ; 004e0831
    MOV EAX,[0x00680d50]                ; 004e0832 | g_CScriptPtr
    FSTP float ptr [ESP + 0x40]         ; 004e0837
    MOV ECX,dword ptr [EAX + 0xc]       ; 004e083b
    PUSH ECX                            ; 004e083e
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0 ; 004e083f
        ;   XREF to: 00408ec0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    ADD ESP,0xc                         ; 004e0844
    LEA EBX,[ESP + 0x18]                ; 004e0847
    LEA EAX,[ESP + 0x24]                ; 004e084b
    FLD float ptr [EAX]                 ; 004e084f
    FMUL float ptr [0x0065e9b4]         ; 004e0851 | FLOAT_0065e9b4
    FISTP dword ptr [EBX]               ; 004e0857
    FLD float ptr [EAX + 0x4]           ; 004e0859
    FMUL float ptr [0x0065e9b4]         ; 004e085c | FLOAT_0065e9b4
    FISTP dword ptr [EBX + 0x4]         ; 004e0862
    FLD float ptr [EAX + 0x8]           ; 004e0865
    FMUL float ptr [0x0065e9b4]         ; 004e0868 | FLOAT_0065e9b4
    FISTP dword ptr [EBX + 0x8]         ; 004e086e
    LEA EAX,[ESP + 0x18]                ; 004e0871
    PUSH EAX                            ; 004e0875
    PUSH 0x32758e4                      ; 004e0876 | g_CDemonCameraInstance
    LEA ESI,[ESP + 0x50]                ; 004e087b
    LEA EDI,[ESP + 0x44]                ; 004e087f
    CALL core_dcamera.cpp_CDemonCamera_worldToScreenWithFrustumCull_FUN_0044d7d0 ; 004e0883
        ;   XREF to: 0044d7d0 (UNCONDITIONAL_CALL)  ; CVector3i * core_dcamera.cpp_CDemonCamera_worldToScreenWithFrustumCull_FUN_0044d7d0(CDemonCamera * this_ptr, CVector3i * output_ptr, CVector3i * input_ptr)
    LEA ESI,[ESP + 0x50]                ; 004e0888
    ADD ESP,0x8                         ; 004e088c
    MOVSD ES:EDI,ESI                    ; 004e088f
    MOVSD ES:EDI,ESI                    ; 004e0890
    MOVSD ES:EDI,ESI                    ; 004e0891
    CMP dword ptr [ESP + 0x44],0x0      ; 004e0892
    JZ 0x004e09b6                       ; 004e0897
        ;   XREF to: 004e09b6 (CONDITIONAL_JUMP)  ; LAB_004e09b6
    MOV EAX,dword ptr [ESP + 0x3c]      ; 004e089d
    MOV EDX,EAX                         ; 004e08a1
    SAR EDX,0x1f                        ; 004e08a3
    SHL EDX,0x10                        ; 004e08a6
    SBB EAX,EDX                         ; 004e08a9
    SAR EAX,0x10                        ; 004e08ab
    MOV [0x02d831f4],EAX                ; 004e08ae | DAT_02d831f4
    MOV EAX,dword ptr [ESP + 0x40]      ; 004e08b3
    MOV EDX,EAX                         ; 004e08b7
    SAR EDX,0x1f                        ; 004e08b9
    SHL EDX,0x10                        ; 004e08bc
    SBB EAX,EDX                         ; 004e08bf
    SAR EAX,0x10                        ; 004e08c1
    MOV ESI,dword ptr [0x00679398]      ; 004e08c4 | g_WindowHeight
    MOV [0x02d831f8],EAX                ; 004e08ca | DAT_02d831f8
    CMP ESI,0x1e0                       ; 004e08cf
    JLE 0x004e09b6                      ; 004e08d5
        ;   XREF to: 004e09b6 (CONDITIONAL_JUMP)  ; LAB_004e09b6
    MOV EDI,dword ptr [0x00679394]      ; 004e08db | g_WindowWidth
    MOV EDX,dword ptr [0x02d831f4]      ; 004e08e1 | DAT_02d831f4
    IMUL EDX,EDI                        ; 004e08e7
    MOV EBX,0x280                       ; 004e08ea
    MOV EAX,EDX                         ; 004e08ef
    SAR EDX,0x1f                        ; 004e08f1
    IDIV EBX                            ; 004e08f4
    MOV EDX,dword ptr [0x02d831f8]      ; 004e08f6 | DAT_02d831f8
    IMUL EDX,ESI                        ; 004e08fc
    MOV EBX,0x1e0                       ; 004e08ff
    MOV [0x02d831f4],EAX                ; 004e0904 | DAT_02d831f4
    MOV EAX,EDX                         ; 004e0909
    SAR EDX,0x1f                        ; 004e090b
    IDIV EBX                            ; 004e090e
    MOV [0x02d831f8],EAX                ; 004e0910 | DAT_02d831f8
    ADD ESP,0x60                        ; 004e0915
    POP EDI                             ; 004e0918
    POP ESI                             ; 004e0919
    POP EBX                             ; 004e091a
    RET                                 ; 004e091b
    MOV dword ptr [0x02d831ec],0x1      ; 004e0920 | DAT_02d831ec
        ;   Label: core_game.cpp_CGame_beginFadeIn_FUN_004e0920
    MOV EDX,dword ptr [0x00679394]      ; 004e092a | g_WindowWidth
    MOV EAX,EDX                         ; 004e0930
    SAR EDX,0x1f                        ; 004e0932
    SUB EAX,EDX                         ; 004e0935
    SAR EAX,0x1                         ; 004e0937
    MOV EDX,dword ptr [0x00679398]      ; 004e0939 | g_WindowHeight
    MOV [0x02d831f4],EAX                ; 004e093f | DAT_02d831f4
    MOV EAX,EDX                         ; 004e0944
    SAR EDX,0x1f                        ; 004e0946
    SUB EAX,EDX                         ; 004e0949
    SAR EAX,0x1                         ; 004e094b
    XOR ECX,ECX                         ; 004e094d
    MOV dword ptr [0x02d831f0],ECX      ; 004e094f | DAT_02d831f0
    MOV [0x02d831f8],EAX                ; 004e0955 | DAT_02d831f8
    JMP 0x004e09a0                      ; 004e095a
        ;   XREF to: 004e09a0 (UNCONDITIONAL_CALL)

