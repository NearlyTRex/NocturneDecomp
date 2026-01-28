; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl shape_design_c_scaleModel_FUN_00467e70(void)
;
; Local Variables:
; undefined8       Stack[-0x70]:8  local_70
; undefined1       Stack[-0x68]:1  local_68
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   shape_design.c_showShapeEditorMenu_FUN_0046f290 at 0046f6b9
;
; Referenced Globals:
;   TerminatedCString s_Enter_in_scale_multiplie_0061cb9d
;   int g_VertexCount
;   SVertexData[20000] g_LoadedVertices
;   undefined4 DAT_01626410
;   undefined4 g_LoadedVertices[0].vertex.z
;
; Called Functions:
;   crt_string.c_strtod_FUN_005ff0f3
;   engine_2d.c_clearInputAndWait_FUN_00403260
;   engine_2d.c_getInputWithPrompt_FUN_004032c0
;   wincore_windll.cpp_clearScreen_FUN_005b3e70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00467e70
        ;   Label: shape_design.c_scaleModel_FUN_00467e70
    PUSH ESI                            ; 00467e71
    PUSH EDI                            ; 00467e72
    PUSH EBP                            ; 00467e73
    MOV EBP,ESP                         ; 00467e74
    SUB ESP,0x60                        ; 00467e76
    CALL engine_2d.c_clearInputAndWait_FUN_00403260 ; 00467e7c
        ;   XREF to: 00403260 (UNCONDITIONAL_CALL)  ; void engine_2d.c_clearInputAndWait_FUN_00403260()
    CALL wincore_windll.cpp_clearScreen_FUN_005b3e70 ; 00467e81
        ;   XREF to: 005b3e70 (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_clearScreen_FUN_005b3e70()
    MOV ECX,0x61cb9d                    ; 00467e86 | = "Enter in scale multiplier : "
    PUSH ECX                            ; 00467e8b | = "Enter in scale multiplier : "
    PUSH 0x0                            ; 00467e8c
    PUSH 0x0                            ; 00467e8e
    PUSH 0x14                           ; 00467e90
    LEA ECX,[EBP + -0x58]               ; 00467e92
    PUSH ECX                            ; 00467e95
    CALL engine_2d.c_getInputWithPrompt_FUN_004032c0 ; 00467e96
        ;   XREF to: 004032c0 (UNCONDITIONAL_CALL)  ; int engine_2d.c_getInputWithPrompt_FUN_004032c0(char * buffer, int max_length, int x, int y, ...)
    ADD ESP,0x14                        ; 00467e9b
    LEA EDI,[EBP + -0x58]               ; 00467e9e
    SUB ECX,ECX                         ; 00467ea1
    DEC ECX                             ; 00467ea3
    XOR EAX,EAX                         ; 00467ea4
    SCASB.REPNE ES:EDI                  ; 00467ea6
    NOT ECX                             ; 00467ea8
    DEC ECX                             ; 00467eaa
    TEST ECX,ECX                        ; 00467eab
    JNZ 0x00467eb1                      ; 00467ead
        ;   XREF to: 00467eb1 (CONDITIONAL_JUMP)  ; LAB_00467eb1
    JMP 0x00467f1e                      ; 00467eaf
        ;   XREF to: 00467f1e (UNCONDITIONAL_JUMP)  ; LAB_00467f1e
    LEA EAX,[EBP + -0x58]               ; 00467eb1
        ;   Label: LAB_00467eb1
    PUSH EAX                            ; 00467eb4
    CALL crt_string.c_strtod_FUN_005ff0f3 ; 00467eb5
        ;   XREF to: 005ff0f3 (UNCONDITIONAL_CALL)  ; double crt_string.c_strtod_FUN_005ff0f3(char * str)
    MOV dword ptr [EBP + -0x60],EAX     ; 00467eba
    MOV dword ptr [EBP + -0x5c],EDX     ; 00467ebd
    FLD double ptr [EBP + -0x60]        ; 00467ec0
    ADD ESP,0x4                         ; 00467ec3
    FSTP float ptr [EBP + -0x4]         ; 00467ec6
    MOV dword ptr [EBP + -0x8],0x0      ; 00467ec9
    JMP 0x00467ed8                      ; 00467ed0
        ;   XREF to: 00467ed8 (UNCONDITIONAL_JUMP)  ; LAB_00467ed8
    MOV EAX,dword ptr [EBP + -0x8]      ; 00467ed2
        ;   Label: LAB_00467ed2
    INC dword ptr [EBP + -0x8]          ; 00467ed5
    MOV EAX,dword ptr [EBP + -0x8]      ; 00467ed8
        ;   Label: LAB_00467ed8
    CMP EAX,dword ptr [0x01626408]      ; 00467edb | g_VertexCount
    JGE 0x00467f1e                      ; 00467ee1
        ;   XREF to: 00467f1e (CONDITIONAL_JUMP)  ; LAB_00467f1e
    IMUL EAX,dword ptr [EBP + -0x8],0x14 ; 00467ee3
    FLD float ptr [EAX + 0x162640c]     ; 00467ee7 | g_LoadedVertices
    FMUL float ptr [EBP + -0x4]         ; 00467eed
    FSTP float ptr [EAX + 0x162640c]    ; 00467ef0 | g_LoadedVertices
    IMUL EAX,dword ptr [EBP + -0x8],0x14 ; 00467ef6
    FLD float ptr [EAX + 0x1626410]     ; 00467efa | DAT_01626410
    FMUL float ptr [EBP + -0x4]         ; 00467f00
    FSTP float ptr [EAX + 0x1626410]    ; 00467f03 | DAT_01626410
    IMUL EAX,dword ptr [EBP + -0x8],0x14 ; 00467f09
    FLD float ptr [EAX + 0x1626414]     ; 00467f0d | g_LoadedVertices[0].vertex.z
    FMUL float ptr [EBP + -0x4]         ; 00467f13
    FSTP float ptr [EAX + 0x1626414]    ; 00467f16 | g_LoadedVertices[0].vertex.z
    JMP 0x00467ed2                      ; 00467f1c
        ;   XREF to: 00467ed2 (UNCONDITIONAL_JUMP)  ; LAB_00467ed2
    MOV ESP,EBP                         ; 00467f1e
        ;   Label: LAB_00467f1e
    POP EBP                             ; 00467f20
    POP EDI                             ; 00467f21
    POP ESI                             ; 00467f22
    POP EBX                             ; 00467f23
    RET                                 ; 00467f24

