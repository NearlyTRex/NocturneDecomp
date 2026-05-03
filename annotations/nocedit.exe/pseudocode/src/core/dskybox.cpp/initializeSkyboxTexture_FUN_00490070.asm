; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; SMRGLSkyTexture * __cdecl core_dskybox_cpp_initializeSkyboxTexture_FUN_00490070(SMRGLSkyTexture *texture)
;
; Parameters:
; SMRGLSkyTexture * Stack[0x4]:4   texture
;
; XREF[1]:
;   core_dskybox.cpp_staticInit_FUN_00490040 at 00490045
;
; Referenced Globals:
;   TerminatedCString s_NITESKY_RAW_00622532
;   undefined4 s_ITESKY.RAW_00622533
;   undefined4 s_TESKY.RAW_00622534
;   undefined4 s_ESKY.RAW_00622535
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00490070
        ;   Label: core_dskybox.cpp_initializeSkyboxTexture_FUN_00490070
    PUSH EDI                            ; 00490071
    MOV EDX,dword ptr [ESP + 0xc]       ; 00490072
    MOV ESI,0x622532                    ; 00490076 | = "NITESKY.RAW"
    LEA EDI,[EDX + 0xc]                 ; 0049007b
    MOV dword ptr [EDX + 0x8],0x0       ; 0049007e
    PUSH EDI                            ; 00490085
    MOV AL,byte ptr [ESI]               ; 00490086 | = "NITESKY.RAW" | s_TESKY.RAW_00622534
        ;   Label: LAB_00490086
    MOV byte ptr [EDI],AL               ; 00490088
    CMP AL,0x0                          ; 0049008a
    JZ 0x0049009e                       ; 0049008c
        ;   XREF to: 0049009e (CONDITIONAL_JUMP)  ; LAB_0049009e
    MOV AL,byte ptr [ESI + 0x1]         ; 0049008e | s_ITESKY.RAW_00622533 | s_ESKY.RAW_00622535
    ADD ESI,0x2                         ; 00490091
    MOV byte ptr [EDI + 0x1],AL         ; 00490094
    ADD EDI,0x2                         ; 00490097
    CMP AL,0x0                          ; 0049009a
    JNZ 0x00490086                      ; 0049009c
        ;   XREF to: 00490086 (CONDITIONAL_JUMP)  ; LAB_00490086
    POP EDI                             ; 0049009e
        ;   Label: LAB_0049009e
    MOV EAX,EDX                         ; 0049009f
    POP EDI                             ; 004900a1
    POP ESI                             ; 004900a2
    RET                                 ; 004900a3

