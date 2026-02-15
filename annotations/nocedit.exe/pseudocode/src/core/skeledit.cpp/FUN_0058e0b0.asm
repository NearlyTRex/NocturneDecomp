; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_skeledit_cpp_FUN_0058e0b0(void)
;
; Local Variables:
; undefined        Stack[-0x31c]:1  local_31c
; undefined        Stack[-0x218]:1  local_218
; undefined        Stack[-0x118]:1  local_118
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; Referenced Globals:
;   TerminatedCString s_core_skeledit_cpp_0064aec2
;   TerminatedCString s_Can_t_add_another_textur_0064aed7
;   TerminatedCString s_tga_0064aef6
;   TerminatedCString s_art_0064aefb
;   TerminatedCString s_raw_0064aeff
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   crt_file.c_makepath_FUN_005febfc
;   crt_stack.c___STK_FUN_005ff9f3
;   crt_stdio.c__sprintf_FUN_005fdbd0
;   crt_string.c_splitpath_FUN_005ff178
;   engine_dosio.c_getFileSize_FUN_00481880
;
; *****************************************************************************

section .text

    PUSH 0x334                          ; 0058e0b0
        ;   Label: core_skeledit.cpp_FUN_0058e0b0
    CALL crt_stack.c___STK_FUN_005ff9f3 ; 0058e0b5
        ;   XREF to: 005ff9f3 (UNCONDITIONAL_CALL)  ; void crt_stack.c___STK_FUN_005ff9f3()
    PUSH EBX                            ; 0058e0ba
    PUSH ESI                            ; 0058e0bb
    PUSH EDI                            ; 0058e0bc
    PUSH EBP                            ; 0058e0bd
    SUB ESP,0x30c                       ; 0058e0be
    MOV EAX,dword ptr [ESP + 0x320]     ; 0058e0c4
    CMP dword ptr [EAX + 0xb8],0x5      ; 0058e0cb
    JGE 0x0058e1f1                      ; 0058e0d2
        ;   XREF to: 0058e1f1 (CONDITIONAL_JUMP)  ; LAB_0058e1f1
    MOV EDX,dword ptr [ESP + 0x320]     ; 0058e0d8
        ;   Label: LAB_0058e0d8
    MOV EBX,dword ptr [ESP + 0x320]     ; 0058e0df
    MOV EDX,dword ptr [EDX + 0xb8]      ; 0058e0e6
    XOR EBP,EBP                         ; 0058e0ec
    LEA EAX,[EDX + 0x1]                 ; 0058e0ee
    MOV ESI,dword ptr [EBX + 0xbc]      ; 0058e0f1
    MOV dword ptr [EBX + 0xb8],EAX      ; 0058e0f7
    TEST ESI,ESI                        ; 0058e0fd
    JLE 0x0058e1e6                      ; 0058e0ff
        ;   XREF to: 0058e1e6 (CONDITIONAL_JUMP)  ; LAB_0058e1e6
    LEA EAX,[EBX + 0xc0]                ; 0058e105
    MOV dword ptr [ESP + 0x308],EAX     ; 0058e10b
    LEA EAX,[EDX*0x4 + 0x0]             ; 0058e112
    SUB EAX,EDX                         ; 0058e119
    SHL EAX,0x7                         ; 0058e11b
    MOV EDX,EAX                         ; 0058e11e
    SHL EAX,0x4                         ; 0058e120
    SUB EAX,EDX                         ; 0058e123
    ADD EBX,0xc8                        ; 0058e125
    MOV dword ptr [ESP + 0x304],EAX     ; 0058e12b
    IMUL EDI,EBP,0x48                   ; 0058e132
        ;   Label: LAB_0058e132
    PUSH 0x0                            ; 0058e135
    LEA EAX,[ESP + 0x208]               ; 0058e137
    PUSH EAX                            ; 0058e13e
    PUSH 0x0                            ; 0058e13f
    PUSH 0x0                            ; 0058e141
    PUSH EBX                            ; 0058e143
    CALL crt_string.c_splitpath_FUN_005ff178 ; 0058e144
        ;   XREF to: 005ff178 (UNCONDITIONAL_CALL)  ; void crt_string.c_splitpath_FUN_005ff178(char * path, char * drive, char * dir, char * fname, ...)
    ADD ESP,0x14                        ; 0058e149
    LEA EAX,[ESP + 0x204]               ; 0058e14c
    PUSH EAX                            ; 0058e153
    MOV EAX,dword ptr [ESP + 0x328]     ; 0058e154
    PUSH EAX                            ; 0058e15b
    LEA EAX,[ESP + 0x10c]               ; 0058e15c
    PUSH EAX                            ; 0058e163
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 0058e164
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 0058e169
    PUSH 0x64aef6                       ; 0058e16c | = ".tga"
    LEA EAX,[ESP + 0x108]               ; 0058e171
    PUSH EAX                            ; 0058e178
    PUSH 0x0                            ; 0058e179
    PUSH 0x0                            ; 0058e17b
    LEA EAX,[ESP + 0x10]                ; 0058e17d
    PUSH EAX                            ; 0058e181
    CALL crt_file.c_makepath_FUN_005febfc ; 0058e182
        ;   XREF to: 005febfc (UNCONDITIONAL_CALL)  ; void crt_file.c_makepath_FUN_005febfc(char * path_buffer, char * drive, char * directory, char * filename, ...)
    ADD ESP,0x14                        ; 0058e187
    MOV EAX,ESP                         ; 0058e18a
    PUSH EAX                            ; 0058e18c
    PUSH 0x64aefb                       ; 0058e18d | = "art"
    CALL engine_dosio.c_getFileSize_FUN_00481880 ; 0058e192
        ;   XREF to: 00481880 (UNCONDITIONAL_CALL)  ; int engine_dosio.c_getFileSize_FUN_00481880(char * directory, char * filename)
    ADD ESP,0x8                         ; 0058e197
    MOV EDX,dword ptr [ESP + 0x308]     ; 0058e19a
    ADD EDX,dword ptr [ESP + 0x304]     ; 0058e1a1
    ADD EDI,EDX                         ; 0058e1a8
    ADD EDI,0x8                         ; 0058e1aa
    TEST EAX,EAX                        ; 0058e1ad
    JGE 0x0058e219                      ; 0058e1af
        ;   XREF to: 0058e219 (CONDITIONAL_JUMP)  ; LAB_0058e219
    MOV ESI,EBX                         ; 0058e1b1
    PUSH EDI                            ; 0058e1b3
    MOV AL,byte ptr [ESI]               ; 0058e1b4
        ;   Label: LAB_0058e1b4
    MOV byte ptr [EDI],AL               ; 0058e1b6
    CMP AL,0x0                          ; 0058e1b8
    JZ 0x0058e1cc                       ; 0058e1ba
        ;   XREF to: 0058e1cc (CONDITIONAL_JUMP)  ; LAB_0058e1cc
    MOV AL,byte ptr [ESI + 0x1]         ; 0058e1bc
    ADD ESI,0x2                         ; 0058e1bf
    MOV byte ptr [EDI + 0x1],AL         ; 0058e1c2
    ADD EDI,0x2                         ; 0058e1c5
    CMP AL,0x0                          ; 0058e1c8
    JNZ 0x0058e1b4                      ; 0058e1ca
        ;   XREF to: 0058e1b4 (CONDITIONAL_JUMP)  ; LAB_0058e1b4
    POP EDI                             ; 0058e1cc
        ;   Label: LAB_0058e1cc
    MOV EAX,dword ptr [ESP + 0x320]     ; 0058e1cd
        ;   Label: LAB_0058e1cd
    INC EBP                             ; 0058e1d4
    MOV EDI,dword ptr [EAX + 0xbc]      ; 0058e1d5
    ADD EBX,0x48                        ; 0058e1db
    CMP EBP,EDI                         ; 0058e1de
    JL 0x0058e132                       ; 0058e1e0
        ;   XREF to: 0058e132 (CONDITIONAL_JUMP)  ; LAB_0058e132
    ADD ESP,0x30c                       ; 0058e1e6
        ;   Label: LAB_0058e1e6
    POP EBP                             ; 0058e1ec
    POP EDI                             ; 0058e1ed
    POP ESI                             ; 0058e1ee
    POP EBX                             ; 0058e1ef
    RET                                 ; 0058e1f0
    MOV ECX,0x64aec2                    ; 0058e1f1 | = "..\\core\\skeledit.cpp"
        ;   Label: LAB_0058e1f1
    MOV EBX,0x912                       ; 0058e1f6
    PUSH 0x64aed7                       ; 0058e1fb | = "Can't add another texture set!"
    MOV dword ptr [0x02f0ca48],ECX      ; 0058e200 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EBX      ; 0058e206 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0058e20c
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 0058e211
    JMP 0x0058e0d8                      ; 0058e214
        ;   XREF to: 0058e0d8 (UNCONDITIONAL_JUMP)  ; LAB_0058e0d8
    PUSH 0x64aeff                       ; 0058e219 | = ".raw"
        ;   Label: LAB_0058e219
    LEA EAX,[ESP + 0x108]               ; 0058e21e
    PUSH EAX                            ; 0058e225
    PUSH 0x0                            ; 0058e226
    PUSH 0x0                            ; 0058e228
    PUSH EDI                            ; 0058e22a
    CALL crt_file.c_makepath_FUN_005febfc ; 0058e22b
        ;   XREF to: 005febfc (UNCONDITIONAL_CALL)  ; void crt_file.c_makepath_FUN_005febfc(char * path_buffer, char * drive, char * directory, char * filename, ...)
    ADD ESP,0x14                        ; 0058e230
    JMP 0x0058e1cd                      ; 0058e233
        ;   XREF to: 0058e1cd (UNCONDITIONAL_JUMP)  ; LAB_0058e1cd

