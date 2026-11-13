; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; double __cdecl crt_unknown_c__strtod_FUN_005bae68(char *str)
;
; Parameters:
; char *           Stack[0x4]:4   str
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[1]:
;   support_trstream.cpp_CInStream_vscanf_FUN_0057bb80 at 0057cac3
;
; Called Functions:
;   crt_unknown.c_FUN_005c1f32
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 005bae68
        ;   Label: crt_unknown.c__strtod_FUN_005bae68
    MOV EBP,ESP                         ; 005bae69
    SUB ESP,0x10                        ; 005bae6b
    PUSH 0x0                            ; 005bae6e
    MOV EDX,dword ptr [EBP + 0x8]       ; 005bae70
    PUSH EDX                            ; 005bae73
    CALL crt_unknown.c_FUN_005c1f32     ; 005bae74
        ;   XREF to: 005c1f32 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c1f32()
    MOV dword ptr [EBP + -0x10],EAX     ; 005bae79
    MOV dword ptr [EBP + -0xc],EDX      ; 005bae7c
    ADD ESP,0x8                         ; 005bae7f
    MOV EAX,dword ptr [EBP + -0x10]     ; 005bae82
    MOV dword ptr [EBP + -0x8],EAX      ; 005bae85
    MOV EAX,dword ptr [EBP + -0xc]      ; 005bae88
    MOV dword ptr [EBP + -0x4],EAX      ; 005bae8b
    MOV EAX,dword ptr [EBP + -0x8]      ; 005bae8e
    MOV EDX,dword ptr [EBP + -0x4]      ; 005bae91
    MOV ESP,EBP                         ; 005bae94
    POP EBP                             ; 005bae96
    RET                                 ; 005bae97

