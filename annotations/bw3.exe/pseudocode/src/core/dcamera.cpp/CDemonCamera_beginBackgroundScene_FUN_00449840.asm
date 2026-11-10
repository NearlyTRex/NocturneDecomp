; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dcamera_cpp_CDemonCamera_beginBackgroundScene_FUN_00449840(CDemonCamera *this_ptr)
;
; Parameters:
; CDemonCamera *   Stack[0x4]:4   this_ptr
;
; XREF[2]:
;   core_set.cpp_CDemonSet_setCameraView_FUN_00534890 at 00534f06
;   core_set.cpp_FUN_00535da0 at 005361f9
;
; Referenced Globals:
;   TerminatedCString s_core_dcamera_cpp_005b9cac
;   TerminatedCString s_CDemonCamera_beginBackgr_005b9cc0
;   undefined4 DAT_005f2afc
;   undefined4 DAT_005fba1c
;   undefined4 DAT_005fba20
;   undefined4 DAT_0149ef08
;   undefined4 DAT_0149ef0c
;   undefined4 DAT_0149ef10
;   undefined4 DAT_0149ef14
;   undefined4 DAT_0149ef18
;   undefined4 DAT_014a01d4
;   undefined4 DAT_014a01d8
;   undefined4 DAT_014a01dc
;   undefined4 DAT_01c5faec
;   undefined4 DAT_01c5faf0
;   ... and 10 more
;
; Called Functions:
;   core_main.c_FUN_004e4330
;   engine_drender.cpp_CDemonRenderer_getCameraAndViewportState_FUN_0046e880
;   engine_drender.cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_0046cb90
;   engine_drender.cpp_CDemonRenderer_setupCameraAndProjection_FUN_0046cc40
;   engine_matrix.c_FUN_0046d090
;   engine_matrix.c_FUN_0046d2f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00449840
        ;   Label: core_dcamera.cpp_CDemonCamera_beginBackgroundScene_FUN_00449840
    PUSH ESI                            ; 00449841
    PUSH EDI                            ; 00449842
    PUSH EBP                            ; 00449843
    MOV EBX,dword ptr [ESP + 0x14]      ; 00449844
    CMP dword ptr [EBX + 0x11e4],0x0    ; 00449848
    JZ 0x004499cf                       ; 0044984f
        ;   XREF to: 004499cf (CONDITIONAL_JUMP)  ; LAB_004499cf
    MOV EDI,dword ptr [0x0149ef08]      ; 00449855 | DAT_0149ef08
        ;   Label: LAB_00449855
    INC EDI                             ; 0044985b
    MOV dword ptr [0x0149ef08],EDI      ; 0044985c | DAT_0149ef08
    CMP EDI,0x1                         ; 00449862
    JNZ 0x004499ca                      ; 00449865
        ;   XREF to: 004499ca (CONDITIONAL_JUMP)  ; LAB_004499ca
    MOV ESI,0x1c5faec                   ; 0044986b
    MOV EDI,0x149ef14                   ; 00449870
    MOV EDX,0x8                         ; 00449875
    MOV EAX,[0x005fba20]                ; 0044987a | DAT_005fba20
    MOV ECX,dword ptr [0x005fba1c]      ; 0044987f | DAT_005fba1c
    MOV [0x0149ef0c],EAX                ; 00449885 | DAT_0149ef0c
    MOV EAX,[0x01c6cee8]                ; 0044988a | DAT_01c6cee8
    SHL ECX,0x2                         ; 0044988f
    MOV [0x0149ef10],EAX                ; 00449892 | DAT_0149ef10
    PUSH EDI                            ; 00449897 | DAT_0149ef14
    MOV EAX,ECX                         ; 00449898
    SHR ECX,0x2                         ; 0044989a
    MOVSD.REP ES:EDI,ESI                ; 0044989d | DAT_01c5faec | DAT_0149ef14 | DAT_01c5faf0
    MOV CL,AL                           ; 0044989f
    AND CL,0x3                          ; 004498a1
    MOVSB.REP ES:EDI,ESI                ; 004498a4 | DAT_01c5faf0 | DAT_0149ef18
    POP EDI                             ; 004498a6
    MOV ESI,0x20                        ; 004498a7
    MOV EAX,[0x01c6af74]                ; 004498ac | DAT_01c6af74
    MOV EBP,dword ptr [EBX + 0x148]     ; 004498b1
    XOR ECX,ECX                         ; 004498b7
    MOV [0x014a01d4],EAX                ; 004498b9 | DAT_014a01d4
    MOV dword ptr [0x005fba20],ESI      ; 004498be | DAT_005fba20
    MOV EAX,[0x01c6af80]                ; 004498c4 | DAT_01c6af80
    MOV dword ptr [0x01c6cee8],ECX      ; 004498c9 | DAT_01c6cee8
    MOV [0x014a01d8],EAX                ; 004498cf | DAT_014a01d8
    MOV EAX,[0x01c6af8c]                ; 004498d4 | DAT_01c6af8c
    MOV dword ptr [0x01c6af80],EDX      ; 004498d9 | DAT_01c6af80
    MOV [0x014a01dc],EAX                ; 004498df | DAT_014a01dc
    MOV EAX,0x10                        ; 004498e4
    MOV dword ptr [0x01c6af8c],ECX      ; 004498e9 | DAT_01c6af8c
    MOV [0x01c6af74],EAX                ; 004498ef | DAT_01c6af74
    XOR EAX,EAX                         ; 004498f4
    TEST EBP,EBP                        ; 004498f6
    JLE 0x00449930                      ; 004498f8
        ;   XREF to: 00449930 (CONDITIONAL_JUMP)  ; LAB_00449930
    XOR EDX,EDX                         ; 004498fa
    MOV ECX,dword ptr [EBX + 0x144]     ; 004498fc
        ;   Label: LAB_004498fc
    IMUL ECX,EAX                        ; 00449902
    LEA ESI,[ECX*0x4 + 0x0]             ; 00449905
    MOV ECX,dword ptr [EBX + 0x158]     ; 0044990c
    ADD ECX,ESI                         ; 00449912
    MOV dword ptr [EDX + 0x1c5faec],ECX ; 00449914 | DAT_01c5faec | DAT_01c5faf0
    INC EAX                             ; 0044991a
    MOV ECX,dword ptr [EBX + 0x148]     ; 0044991b
    ADD EDX,0x4                         ; 00449921
    CMP EAX,ECX                         ; 00449924
    JL 0x004498fc                       ; 00449926
        ;   XREF to: 004498fc (CONDITIONAL_JUMP)  ; LAB_004498fc
    LEA EAX,[EAX]                       ; 00449928
    MOV EDX,EDX                         ; 0044992e
    MOV EAX,dword ptr [EBX + 0x148]     ; 00449930
        ;   Label: LAB_00449930
    DEC EAX                             ; 00449936
    PUSH EAX                            ; 00449937
    MOV EAX,dword ptr [EBX + 0x144]     ; 00449938
    DEC EAX                             ; 0044993e
    PUSH EAX                            ; 0044993f
    PUSH 0x0                            ; 00449940
    PUSH 0x0                            ; 00449942
    MOV ESI,dword ptr [0x005f2afc]      ; 00449944 | DAT_005f2afc
    PUSH ESI                            ; 0044994a
    CALL engine_matrix.c_FUN_0046d2f0   ; 0044994b
        ;   XREF to: 0046d2f0 (UNCONDITIONAL_CALL)  ; undefined engine_matrix.c_FUN_0046d2f0()
    MOV EAX,[0x01c6b598]                ; 00449950 | DAT_01c6b598
    MOV EDI,dword ptr [0x005f2afc]      ; 00449955 | DAT_005f2afc
    MOV dword ptr [EBX + 0x1c0],EAX     ; 0044995b
    MOV EAX,[0x01c6b59c]                ; 00449961 | DAT_01c6b59c
    ADD ESP,0x14                        ; 00449966
    MOV dword ptr [EBX + 0x1c4],EAX     ; 00449969
    MOV EAX,[0x01c6b5a0]                ; 0044996f | DAT_01c6b5a0
    PUSH 0x14a01f0                      ; 00449974
    MOV dword ptr [EBX + 0x1c8],EAX     ; 00449979
    MOV EAX,[0x01c6b5a4]                ; 0044997f | DAT_01c6b5a4
    PUSH EDI                            ; 00449984
    MOV dword ptr [EBX + 0x1cc],EAX     ; 00449985
    CALL engine_drender.cpp_CDemonRenderer_getCameraAndViewportState_FUN_0046e880 ; 0044998b
        ;   XREF to: 0046e880 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_getCameraAndViewportState_FUN_0046e880(CDemonRenderer * this_ptr, SCameraViewportState * output_state)
    ADD ESP,0x8                         ; 00449990
    LEA EAX,[EBX + 0x4]                 ; 00449993
    PUSH EAX                            ; 00449996
    MOV EBP,dword ptr [0x005f2afc]      ; 00449997 | DAT_005f2afc
    PUSH EBP                            ; 0044999d
    CALL engine_drender.cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_0046cb90 ; 0044999e
        ;   XREF to: 0046cb90 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_0046cb90(CDemonRenderer * this_ptr, CVector3f * point_ptr)
    ADD ESP,0x8                         ; 004499a3
    MOV EAX,[0x005f2afc]                ; 004499a6 | DAT_005f2afc
    PUSH dword ptr [EBX + 0x38]         ; 004499ab
    PUSH EAX                            ; 004499ae
    CALL engine_matrix.c_FUN_0046d090   ; 004499af
        ;   XREF to: 0046d090 (UNCONDITIONAL_CALL)  ; undefined engine_matrix.c_FUN_0046d090()
    ADD ESP,0x8                         ; 004499b4
    ADD EBX,0x10                        ; 004499b7
    PUSH EBX                            ; 004499ba
    MOV EDX,dword ptr [0x005f2afc]      ; 004499bb | DAT_005f2afc
    PUSH EDX                            ; 004499c1
    CALL engine_drender.cpp_CDemonRenderer_setupCameraAndProjection_FUN_0046cc40 ; 004499c2
        ;   XREF to: 0046cc40 (UNCONDITIONAL_CALL)  ; void engine_drender.cpp_CDemonRenderer_setupCameraAndProjection_FUN_0046cc40(CDemonRenderer * this_ptr, CMatrix3x3f * transform_matrix)
    ADD ESP,0x8                         ; 004499c7
    POP EBP                             ; 004499ca
        ;   Label: LAB_004499ca
    POP EDI                             ; 004499cb
    POP ESI                             ; 004499cc
    POP EBX                             ; 004499cd
    RET                                 ; 004499ce
    MOV ECX,0x5b9cac                    ; 004499cf | = "..\\core\\dcamera.cpp"
        ;   Label: LAB_004499cf
    MOV ESI,0x436                       ; 004499d4
    PUSH 0x5b9cc0                       ; 004499d9 | = "CDemonCamera::beginBackgroundScene - ..."
    MOV dword ptr [0x01d71de0],ECX      ; 004499de | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ESI      ; 004499e4 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 004499ea
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 004499ef
    JMP 0x00449855                      ; 004499f2
        ;   XREF to: 00449855 (UNCONDITIONAL_JUMP)  ; LAB_00449855

