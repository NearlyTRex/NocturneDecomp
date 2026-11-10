; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_fldnotes_cpp_FUN_004a5200(undefined4 param_1,undefined4 param_2,undefined4 param_3,char *param_4)
;
;
; XREF[1]:
;   core_event.cpp_FUN_00489670 at 0048b0b1
;
; Referenced Globals:
;   TerminatedCString s_No_such_entry_s_005d62d9
;   TerminatedCString s_s_is_not_a_map_005d62ec
;   TerminatedCString s_No_such_annotion_s_found_005d62fe
;   undefined4 DAT_01cab9f0
;
; Called Functions:
;   core_fldnotes.cpp_FUN_004a35e0
;   core_fldnotes.cpp_FUN_004a3b50
;   crt_unknown.c_sprintf_FUN_005b7790
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a5200
        ;   Label: core_fldnotes.cpp_FUN_004a5200
    PUSH ESI                            ; 004a5201
    PUSH EDI                            ; 004a5202
    PUSH EBP                            ; 004a5203
    MOV EDI,dword ptr [ESP + 0x18]      ; 004a5204
    MOV EDX,dword ptr [0x01cab9f0]      ; 004a5208 | DAT_01cab9f0
    XOR EBP,EBP                         ; 004a520e
    XOR EBX,EBX                         ; 004a5210
    TEST EDX,EDX                        ; 004a5212
    JLE 0x004a528a                      ; 004a5214
        ;   XREF to: 004a528a (CONDITIONAL_JUMP)  ; LAB_004a528a
    MOV ESI,0x1cab9f4                   ; 004a521a
    PUSH EDI                            ; 004a521f
        ;   Label: LAB_004a521f
    PUSH ESI                            ; 004a5220
    CALL core_fldnotes.cpp_FUN_004a35e0 ; 004a5221
        ;   XREF to: 004a35e0 (UNCONDITIONAL_CALL)  ; undefined core_fldnotes.cpp_FUN_004a35e0()
    ADD ESP,0x8                         ; 004a5226
    MOV EDX,EAX                         ; 004a5229
    TEST EAX,EAX                        ; 004a522b
    JZ 0x004a5279                       ; 004a522d
        ;   XREF to: 004a5279 (CONDITIONAL_JUMP)  ; LAB_004a5279
    TEST EBP,EBP                        ; 004a522f
    JZ 0x004a5236                       ; 004a5231
        ;   XREF to: 004a5236 (CONDITIONAL_JUMP)  ; LAB_004a5236
    MOV dword ptr [EBP],EBX             ; 004a5233
    MOV EAX,EDX                         ; 004a5236
        ;   Label: LAB_004a5236
    MOV EDX,EAX                         ; 004a5238
        ;   Label: LAB_004a5238
    TEST EAX,EAX                        ; 004a523a
    JZ 0x004a528e                       ; 004a523c
        ;   XREF to: 004a528e (CONDITIONAL_JUMP)  ; LAB_004a528e
    MOV EBX,dword ptr [EAX + 0x140]     ; 004a523e
    CMP EBX,0x5                         ; 004a5244
    JZ 0x004a524e                       ; 004a5247
        ;   XREF to: 004a524e (CONDITIONAL_JUMP)  ; LAB_004a524e
    CMP EBX,0x6                         ; 004a5249
    JNZ 0x004a52ac                      ; 004a524c
        ;   XREF to: 004a52ac (CONDITIONAL_JUMP)  ; LAB_004a52ac
    IMUL EAX,dword ptr [EDX + 0x158],0x970 ; 004a524e
        ;   Label: LAB_004a524e
    MOV EBP,dword ptr [ESP + 0x1c]      ; 004a5258
    PUSH EBP                            ; 004a525c
    ADD EAX,0x1cacb50                   ; 004a525d
    PUSH EAX                            ; 004a5262
    CALL core_fldnotes.cpp_FUN_004a3b50 ; 004a5263
        ;   XREF to: 004a3b50 (UNCONDITIONAL_CALL)  ; undefined core_fldnotes.cpp_FUN_004a3b50()
    ADD ESP,0x8                         ; 004a5268
    TEST EAX,EAX                        ; 004a526b
    JZ 0x004a52ca                       ; 004a526d
        ;   XREF to: 004a52ca (CONDITIONAL_JUMP)  ; LAB_004a52ca
    MOV EAX,0x1                         ; 004a526f
    POP EBP                             ; 004a5274
    POP EDI                             ; 004a5275
    POP ESI                             ; 004a5276
    POP EBX                             ; 004a5277
    RET                                 ; 004a5278
    MOV ECX,dword ptr [0x01cab9f0]      ; 004a5279 | DAT_01cab9f0
        ;   Label: LAB_004a5279
    INC EBX                             ; 004a527f
    ADD ESI,0x2e4                       ; 004a5280
    CMP EBX,ECX                         ; 004a5286
    JL 0x004a521f                       ; 004a5288
        ;   XREF to: 004a521f (CONDITIONAL_JUMP)  ; LAB_004a521f
    XOR EAX,EAX                         ; 004a528a
        ;   Label: LAB_004a528a
    JMP 0x004a5238                      ; 004a528c
        ;   XREF to: 004a5238 (UNCONDITIONAL_JUMP)  ; LAB_004a5238
    MOV EDI,dword ptr [ESP + 0x18]      ; 004a528e
        ;   Label: LAB_004a528e
    PUSH EDI                            ; 004a5292
    PUSH 0x5d62d9                       ; 004a5293 | = "No such entry '%s'"
    MOV EBP,dword ptr [ESP + 0x28]      ; 004a5298
    PUSH EBP                            ; 004a529c
    CALL crt_unknown.c_sprintf_FUN_005b7790 ; 004a529d
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005b7790(char * buffer, char * format)
    ADD ESP,0xc                         ; 004a52a2
    XOR EAX,EAX                         ; 004a52a5
    POP EBP                             ; 004a52a7
    POP EDI                             ; 004a52a8
    POP ESI                             ; 004a52a9
    POP EBX                             ; 004a52aa
    RET                                 ; 004a52ab
    MOV EBX,dword ptr [ESP + 0x18]      ; 004a52ac
        ;   Label: LAB_004a52ac
    PUSH EBX                            ; 004a52b0
    PUSH 0x5d62ec                       ; 004a52b1 | = "'%s' is not a map"
    MOV ESI,dword ptr [ESP + 0x28]      ; 004a52b6
    PUSH ESI                            ; 004a52ba
    CALL crt_unknown.c_sprintf_FUN_005b7790 ; 004a52bb
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005b7790(char * buffer, char * format)
    ADD ESP,0xc                         ; 004a52c0
    XOR EAX,EAX                         ; 004a52c3
    POP EBP                             ; 004a52c5
    POP EDI                             ; 004a52c6
    POP ESI                             ; 004a52c7
    POP EBX                             ; 004a52c8
    RET                                 ; 004a52c9
    MOV EAX,dword ptr [ESP + 0x18]      ; 004a52ca
        ;   Label: LAB_004a52ca
    PUSH EAX                            ; 004a52ce
    PUSH EBP                            ; 004a52cf
    PUSH 0x5d62fe                       ; 004a52d0 | = "No such annotion '%s' found on map '%s'"
    MOV ECX,dword ptr [ESP + 0x2c]      ; 004a52d5
    PUSH ECX                            ; 004a52d9
    CALL crt_unknown.c_sprintf_FUN_005b7790 ; 004a52da
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005b7790(char * buffer, char * format)
    ADD ESP,0x10                        ; 004a52df
    XOR EAX,EAX                         ; 004a52e2
    POP EBP                             ; 004a52e4
    POP EDI                             ; 004a52e5
    POP ESI                             ; 004a52e6
    POP EBX                             ; 004a52e7
    RET                                 ; 004a52e8

