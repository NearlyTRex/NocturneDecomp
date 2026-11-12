; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; double __cdecl crt_unknown_c__strtod_FUN_005c3228(char *str)
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
;   support_trstream.cpp_FUN_0059f700 at 005a0643
;
; Called Functions:
;   crt_unknown.c_FUN_005ca282
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 005c3228
        ;   Label: crt_unknown.c__strtod_FUN_005c3228
    MOV EBP,ESP                         ; 005c3229
    SUB ESP,0x10                        ; 005c322b
    PUSH 0x0                            ; 005c322e
    MOV EDX,dword ptr [EBP + 0x8]       ; 005c3230
    PUSH EDX                            ; 005c3233
    CALL crt_unknown.c_FUN_005ca282     ; 005c3234
        ;   XREF to: 005ca282 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005ca282()
    MOV dword ptr [EBP + -0x10],EAX     ; 005c3239
    MOV dword ptr [EBP + -0xc],EDX      ; 005c323c
    ADD ESP,0x8                         ; 005c323f
    MOV EAX,dword ptr [EBP + -0x10]     ; 005c3242
    MOV dword ptr [EBP + -0x8],EAX      ; 005c3245
    MOV EAX,dword ptr [EBP + -0xc]      ; 005c3248
    MOV dword ptr [EBP + -0x4],EAX      ; 005c324b
    MOV EAX,dword ptr [EBP + -0x8]      ; 005c324e
    MOV EDX,dword ptr [EBP + -0x4]      ; 005c3251
    MOV ESP,EBP                         ; 005c3254
    POP EBP                             ; 005c3256
    RET                                 ; 005c3257

