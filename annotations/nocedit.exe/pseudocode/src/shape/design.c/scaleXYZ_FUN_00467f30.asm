; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_design_c_scaleXYZ_FUN_00467f30(void)
;
; Local Variables:
; char[80]         Stack[-0x70]:80  local_70
; int              Stack[-0x20]:4  local_20
; float            Stack[-0x1c]:4  local_1c
; float            Stack[-0x18]:4  local_18
; float            Stack[-0x14]:4  local_14
;
; XREF[1]:
;   shape_design.c_showShapeEditorMenu_FUN_0046f290 at 0046f736
;
; Referenced Globals:
;   TerminatedCString s_Enter_X_Y_Z_scales_0061cbba
;   TerminatedCString s_f_f_f_0061cbd0
;   int g_VertexCount
;   SVertexData[20000] g_LoadedVertices
;   undefined4 g_LoadedVertices[0].vertex.y
;   undefined4 g_LoadedVertices[0].vertex.z
;
; Called Functions:
;   crt_stdio.c_sscanf_FUN_0060013c
;   engine_2d.c_getInputWithPrompt_FUN_004032c0
;   wincore_windll.cpp_clearScreen_FUN_005b3e70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00467f30
        ;   Label: shape_design.c_scaleXYZ_FUN_00467f30
    PUSH ESI                            ; 00467f31
    PUSH EDI                            ; 00467f32
    PUSH EBP                            ; 00467f33
    MOV EBP,ESP                         ; 00467f34
    SUB ESP,0x60                        ; 00467f36
    CALL wincore_windll.cpp_clearScreen_FUN_005b3e70 ; 00467f3c
        ;   XREF to: 005b3e70 (UNCONDITIONAL_CALL)  ; void wincore_windll.cpp_clearScreen_FUN_005b3e70()
    MOV ECX,0x61cbba                    ; 00467f41 | = "Enter X,Y,Z scales : "
    PUSH ECX                            ; 00467f46 | = "Enter X,Y,Z scales : "
    PUSH 0x0                            ; 00467f47
    PUSH 0x0                            ; 00467f49
    PUSH 0x32                           ; 00467f4b
    LEA ECX,[EBP + -0x60]               ; 00467f4d
    PUSH ECX                            ; 00467f50
    CALL engine_2d.c_getInputWithPrompt_FUN_004032c0 ; 00467f51
        ;   XREF to: 004032c0 (UNCONDITIONAL_CALL)  ; int engine_2d.c_getInputWithPrompt_FUN_004032c0(char * buffer, int max_length, int x, int y, ...)
    ADD ESP,0x14                        ; 00467f56
    LEA EDI,[EBP + -0x60]               ; 00467f59
    SUB ECX,ECX                         ; 00467f5c
    DEC ECX                             ; 00467f5e
    XOR EAX,EAX                         ; 00467f5f
    SCASB.REPNE ES:EDI                  ; 00467f61
    NOT ECX                             ; 00467f63
    DEC ECX                             ; 00467f65
    TEST ECX,ECX                        ; 00467f66
    JNZ 0x00467f6f                      ; 00467f68
        ;   XREF to: 00467f6f (CONDITIONAL_JUMP)  ; LAB_00467f6f
    JMP 0x00467fed                      ; 00467f6a
        ;   XREF to: 00467fed (UNCONDITIONAL_JUMP)  ; LAB_00467fed
    LEA EAX,[EBP + -0x4]                ; 00467f6f
        ;   Label: LAB_00467f6f
    PUSH EAX                            ; 00467f72
    LEA EAX,[EBP + -0x8]                ; 00467f73
    PUSH EAX                            ; 00467f76
    LEA EAX,[EBP + -0xc]                ; 00467f77
    PUSH EAX                            ; 00467f7a
    MOV EAX,0x61cbd0                    ; 00467f7b | = "%f,%f,%f"
    PUSH EAX                            ; 00467f80 | = "%f,%f,%f"
    LEA EAX,[EBP + -0x60]               ; 00467f81
    PUSH EAX                            ; 00467f84
    CALL crt_stdio.c_sscanf_FUN_0060013c ; 00467f85
        ;   XREF to: 0060013c (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sscanf_FUN_0060013c(char * str, char * format)
    ADD ESP,0x14                        ; 00467f8a
    MOV dword ptr [EBP + -0x10],EAX     ; 00467f8d
    CMP dword ptr [EBP + -0x10],0x3     ; 00467f90
    JZ 0x00467f98                       ; 00467f94
        ;   XREF to: 00467f98 (CONDITIONAL_JUMP)  ; LAB_00467f98
    JMP 0x00467fed                      ; 00467f96
        ;   XREF to: 00467fed (UNCONDITIONAL_JUMP)  ; LAB_00467fed
    MOV dword ptr [EBP + -0x10],0x0     ; 00467f98
        ;   Label: LAB_00467f98
    JMP 0x00467fa7                      ; 00467f9f
        ;   XREF to: 00467fa7 (UNCONDITIONAL_JUMP)  ; LAB_00467fa7
    MOV EAX,dword ptr [EBP + -0x10]     ; 00467fa1
        ;   Label: LAB_00467fa1
    INC dword ptr [EBP + -0x10]         ; 00467fa4
    MOV EAX,dword ptr [EBP + -0x10]     ; 00467fa7
        ;   Label: LAB_00467fa7
    CMP EAX,dword ptr [0x01626408]      ; 00467faa | g_VertexCount
    JGE 0x00467fed                      ; 00467fb0
        ;   XREF to: 00467fed (CONDITIONAL_JUMP)  ; LAB_00467fed
    IMUL EAX,dword ptr [EBP + -0x10],0x14 ; 00467fb2
    FLD float ptr [EAX + 0x162640c]     ; 00467fb6 | g_LoadedVertices
    FMUL float ptr [EBP + -0xc]         ; 00467fbc
    FSTP float ptr [EAX + 0x162640c]    ; 00467fbf | g_LoadedVertices
    IMUL EAX,dword ptr [EBP + -0x10],0x14 ; 00467fc5
    FLD float ptr [EAX + 0x1626410]     ; 00467fc9 | g_LoadedVertices[0].vertex.y
    FMUL float ptr [EBP + -0x8]         ; 00467fcf
    FSTP float ptr [EAX + 0x1626410]    ; 00467fd2 | g_LoadedVertices[0].vertex.y
    IMUL EAX,dword ptr [EBP + -0x10],0x14 ; 00467fd8
    FLD float ptr [EAX + 0x1626414]     ; 00467fdc | g_LoadedVertices[0].vertex.z
    FMUL float ptr [EBP + -0x4]         ; 00467fe2
    FSTP float ptr [EAX + 0x1626414]    ; 00467fe5 | g_LoadedVertices[0].vertex.z
    JMP 0x00467fa1                      ; 00467feb
        ;   XREF to: 00467fa1 (UNCONDITIONAL_JUMP)  ; LAB_00467fa1
    MOV ESP,EBP                         ; 00467fed
        ;   Label: LAB_00467fed
    POP EBP                             ; 00467fef
    POP EDI                             ; 00467ff0
    POP ESI                             ; 00467ff1
    POP EBX                             ; 00467ff2
    RET                                 ; 00467ff3

