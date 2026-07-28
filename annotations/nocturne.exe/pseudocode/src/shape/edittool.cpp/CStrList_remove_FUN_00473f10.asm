; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_edittool_cpp_CStrList_remove_FUN_00473f10(CStrList *this_ptr,int start_index,int end_index)
;
; Parameters:
; CStrList *       Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   start_index
; int              Stack[0xc]:4   end_index
;
; XREF[1]:
;   shape_edittool.cpp_CPickList_remove_FUN_00476100 at 0047611f
;
; Referenced Globals:
;   TerminatedCString s_shape_edittool_cpp_0057ec7a
;   TerminatedCString s_CStrList_remove_invalid_0057ec90
;   char* PTR_01cc4800
;   int INT_01cc4804
;
; Called Functions:
;   core_main.c_FUN_004c8440
;   crt_string.c_memmove_FUN_00566170
;   crt_unknown.c_FUN_005638d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00473f10
        ;   Label: shape_edittool.cpp_CStrList_remove_FUN_00473f10
    PUSH ESI                            ; 00473f11
    PUSH EDI                            ; 00473f12
    PUSH EBP                            ; 00473f13
    MOV ESI,dword ptr [ESP + 0x14]      ; 00473f14
    MOV EBP,dword ptr [ESP + 0x18]      ; 00473f18
    TEST EBP,EBP                        ; 00473f1c
    JL 0x00473f2c                       ; 00473f1e
        ;   XREF to: 00473f2c (CONDITIONAL_JUMP)  ; LAB_00473f2c
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00473f20
    CMP EAX,dword ptr [ESI]             ; 00473f24
    JL 0x00473fb8                       ; 00473f26
        ;   XREF to: 00473fb8 (CONDITIONAL_JUMP)  ; LAB_00473fb8
    MOV EBX,0x57ec7a                    ; 00473f2c | = "..\\shape\\edittool.cpp"
        ;   Label: LAB_00473f2c
    MOV EDI,0xa03                       ; 00473f31
    PUSH 0x57ec90                       ; 00473f36 | = "CStrList::remove - invalid range"
    MOV dword ptr [0x01cc4800],EBX      ; 00473f3b | PTR_01cc4800
    MOV dword ptr [0x01cc4804],EDI      ; 00473f41 | INT_01cc4804
    CALL core_main.c_FUN_004c8440       ; 00473f47
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004c8440()
    ADD ESP,0x4                         ; 00473f4c
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00473f4f
        ;   Label: LAB_00473f4f
    CMP EBP,EAX                         ; 00473f53
    JG 0x00473f80                       ; 00473f55
        ;   XREF to: 00473f80 (CONDITIONAL_JUMP)  ; LAB_00473f80
    LEA EDI,[EAX*0x4 + 0x0]             ; 00473f57
    LEA EBX,[EBP*0x4 + 0x0]             ; 00473f5e
    MOV EAX,dword ptr [ESI + 0x8]       ; 00473f65
        ;   Label: LAB_00473f65
    ADD EAX,EBX                         ; 00473f68
    MOV EDX,dword ptr [EAX]             ; 00473f6a
    TEST EDX,EDX                        ; 00473f6c
    JZ 0x00473f79                       ; 00473f6e
        ;   XREF to: 00473f79 (CONDITIONAL_JUMP)  ; LAB_00473f79
    PUSH EDX                            ; 00473f70
    CALL crt_unknown.c_FUN_005638d0     ; 00473f71
        ;   XREF to: 005638d0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005638d0()
    ADD ESP,0x4                         ; 00473f76
    ADD EBX,0x4                         ; 00473f79
        ;   Label: LAB_00473f79
    CMP EBX,EDI                         ; 00473f7c
    JLE 0x00473f65                      ; 00473f7e
        ;   XREF to: 00473f65 (CONDITIONAL_JUMP)  ; LAB_00473f65
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00473f80
        ;   Label: LAB_00473f80
    SUB EAX,EBP                         ; 00473f84
    MOV EBX,dword ptr [ESI]             ; 00473f86
    INC EAX                             ; 00473f88
    SUB EBX,EAX                         ; 00473f89
    MOV EAX,EBX                         ; 00473f8b
    MOV dword ptr [ESI],EBX             ; 00473f8d
    SUB EAX,EBP                         ; 00473f8f
    MOV EBX,dword ptr [ESP + 0x1c]      ; 00473f91
    SHL EAX,0x2                         ; 00473f95
    SHL EBX,0x2                         ; 00473f98
    PUSH EAX                            ; 00473f9b
    ADD EBX,0x4                         ; 00473f9c
    MOV EAX,dword ptr [ESI + 0x8]       ; 00473f9f
    ADD EBX,EAX                         ; 00473fa2
    SHL EBP,0x2                         ; 00473fa4
    PUSH EBX                            ; 00473fa7
    ADD EAX,EBP                         ; 00473fa8
    PUSH EAX                            ; 00473faa
    CALL crt_string.c_memmove_FUN_00566170 ; 00473fab
        ;   XREF to: 00566170 (UNCONDITIONAL_CALL)  ; void * crt_string.c_memmove_FUN_00566170(void * dest, void * src, SIZE_T n)
    ADD ESP,0xc                         ; 00473fb0
    POP EBP                             ; 00473fb3
    POP EDI                             ; 00473fb4
    POP ESI                             ; 00473fb5
    POP EBX                             ; 00473fb6
    RET                                 ; 00473fb7
    CMP EBP,EAX                         ; 00473fb8
        ;   Label: LAB_00473fb8
    JG 0x00473f2c                       ; 00473fba
        ;   XREF to: 00473f2c (CONDITIONAL_JUMP)  ; LAB_00473f2c
    JMP 0x00473f4f                      ; 00473fc0
        ;   XREF to: 00473f4f (UNCONDITIONAL_JUMP)  ; LAB_00473f4f

