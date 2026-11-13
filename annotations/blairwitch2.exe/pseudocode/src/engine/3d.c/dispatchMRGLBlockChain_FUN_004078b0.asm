; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_3d_c_dispatchMRGLBlockChain_FUN_004078b0(SMRGLHeaderExtended *chain)
;
; Parameters:
; SMRGLHeaderExtended * Stack[0x4]:4   chain
;
; XREF[2]:
;   engine_3d.c_dispatchMRGLToRenderer_FUN_004079f0 at 00407a9e
;   engine_keyframe.c_interpolateCubicKeyframes_FUN_004df960 at 004dfce1
;
; Referenced Globals:
;   undefined1* PTR_engine_3d.c_badMRGLStruct_FUN_00403800_006093c4 = 00403800
;   undefined4 DAT_006141e0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004078b0
        ;   Label: engine_3d.c_dispatchMRGLBlockChain_FUN_004078b0
    MOV EDX,EAX                         ; 004078b4
    TEST EAX,EAX                        ; 004078b6
    JZ 0x004078d1                       ; 004078b8
        ;   XREF to: 004078d1 (CONDITIONAL_JUMP)  ; LAB_004078d1
    MOV EAX,dword ptr [EDX]             ; 004078ba
        ;   Label: LAB_004078ba
    TEST EAX,EAX                        ; 004078bc
    JZ 0x004078c7                       ; 004078be
        ;   XREF to: 004078c7 (CONDITIONAL_JUMP)  ; LAB_004078c7
    JL 0x004078c7                       ; 004078c0
        ;   XREF to: 004078c7 (CONDITIONAL_JUMP)  ; LAB_004078c7
    CMP EAX,0x43                        ; 004078c2
    JL 0x004078d2                       ; 004078c5
        ;   XREF to: 004078d2 (CONDITIONAL_JUMP)  ; LAB_004078d2
    MOV dword ptr [0x006141e0],0x1      ; 004078c7 | DAT_006141e0
        ;   Label: LAB_004078c7
    RET                                 ; 004078d1
        ;   Label: LAB_004078d1
    PUSH EDX                            ; 004078d2
        ;   Label: LAB_004078d2
    CALL dword ptr [EAX*0x4 + 0x6093c4] ; 004078d3 | PTR_engine_3d.c_badMRGLStruct_FUN_00403800_006093c4
    ADD ESP,0x4                         ; 004078da
    MOV EDX,EAX                         ; 004078dd
    JMP 0x004078ba                      ; 004078df
        ;   XREF to: 004078ba (UNCONDITIONAL_JUMP)  ; LAB_004078ba

