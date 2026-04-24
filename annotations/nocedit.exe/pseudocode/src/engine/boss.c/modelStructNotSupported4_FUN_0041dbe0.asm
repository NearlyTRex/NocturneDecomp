; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __stack_esi engine_boss_c_modelStructNotSupported4_FUN_0041dbe0(SMRGLHeaderExtended *mrgl_data,SMRGLModelBounds *out_bounds)
;
; Parameters:
; SMRGLHeaderExtended * Stack[0x4]:4   mrgl_data
; Local Variables:
; undefined4[13]   Stack[-0x3c]:52  local_3c
;
; XREF[1]:
;   engine_model.c_getMRGLBounds_FUN_00528140 at 005285aa
;
; Referenced Globals:
;   TerminatedCString s_engine_boss_c_00616419
;   string s_modelStruct_not_supported_0061642a
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0041dbe0
        ;   Label: engine_boss.c_modelStructNotSupported4_FUN_0041dbe0
    PUSH EDI                            ; 0041dbe1
    SUB ESP,0x34                        ; 0041dbe2
    MOV EBX,ESI                         ; 0041dbe5
    MOV EDX,0x616419                    ; 0041dbe7 | = "..\\engine\\boss.c"
    MOV ECX,0x44                        ; 0041dbec
    PUSH 0x61642a                       ; 0041dbf1 | = "modelStruct not supported"
    MOV EDI,ESI                         ; 0041dbf6
    LEA ESI,[ESP + 0x4]                 ; 0041dbf8
    MOV dword ptr [0x02f0ca48],EDX      ; 0041dbfc | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ECX      ; 0041dc02 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0041dc08
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    JMP 0x03fc37bf                      ; 0041dc0d
        ;   XREF to: 03fc37bf (UNCONDITIONAL_JUMP)  ; LAB_03fc37bf
    MOV EAX,EBX                         ; 0041dc17
        ;   Label: LAB_0041dc17
    ADD ESP,0x34                        ; 0041dc19
    POP EDI                             ; 0041dc1c
    POP EBX                             ; 0041dc1d
    RET                                 ; 0041dc1e
    MOV ECX,0xd                         ; 03fc37bf
        ;   Label: LAB_03fc37bf
    ADD ESP,0x4                         ; 03fc37c4
    MOV ECX,dword ptr [ESI]             ; 03fc37c7
    MOV dword ptr [EDI],ECX             ; 03fc37c9
    MOV ECX,dword ptr [ESI + 0x4]       ; 03fc37cb
    MOV dword ptr [EDI + 0x4],ECX       ; 03fc37ce
    MOV ECX,dword ptr [ESI + 0x8]       ; 03fc37d1
    MOV dword ptr [EDI + 0x8],ECX       ; 03fc37d4
    MOV ECX,dword ptr [ESI + 0xc]       ; 03fc37d7
    MOV dword ptr [EDI + 0xc],ECX       ; 03fc37da
    MOV ECX,dword ptr [ESI + 0x10]      ; 03fc37dd
    MOV dword ptr [EDI + 0x10],ECX      ; 03fc37e0
    MOV ECX,dword ptr [ESI + 0x14]      ; 03fc37e3
    MOV dword ptr [EDI + 0x14],ECX      ; 03fc37e6
    MOV ECX,dword ptr [ESI + 0x18]      ; 03fc37e9
    MOV dword ptr [EDI + 0x18],ECX      ; 03fc37ec
    MOV ECX,dword ptr [ESI + 0x1c]      ; 03fc37ef
    MOV dword ptr [EDI + 0x1c],ECX      ; 03fc37f2
    MOV ECX,dword ptr [ESI + 0x20]      ; 03fc37f5
    MOV dword ptr [EDI + 0x20],ECX      ; 03fc37f8
    MOV ECX,dword ptr [ESI + 0x24]      ; 03fc37fb
    MOV dword ptr [EDI + 0x24],ECX      ; 03fc37fe
    MOV ECX,dword ptr [ESI + 0x28]      ; 03fc3801
    MOV dword ptr [EDI + 0x28],ECX      ; 03fc3804
    MOV ECX,dword ptr [ESI + 0x2c]      ; 03fc3807
    MOV dword ptr [EDI + 0x2c],ECX      ; 03fc380a
    MOV ECX,dword ptr [ESI + 0x30]      ; 03fc380d
    MOV dword ptr [EDI + 0x30],ECX      ; 03fc3810
    ADD ESI,0x34                        ; 03fc3813
    ADD EDI,0x34                        ; 03fc3816
    XOR ECX,ECX                         ; 03fc3819
    JMP 0x0041dc17                      ; 03fc381b
        ;   XREF to: 0041dc17 (UNCONDITIONAL_JUMP)  ; LAB_0041dc17

