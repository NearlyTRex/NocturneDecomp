; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; char * unkafter_asgaya_cpp_FUN_005ad370(longlong *param_1,char *param_2,int param_3)
;
; Local Variables:
; undefined1       Stack[-0x54]:1  local_54
; undefined        Stack[-0x53]:1  local_53
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[1]:
;   crt_unknown.c_FUN_005a6a78 at 005a6ea8
;
; Referenced Globals:
;   TerminatedCString s_s_0123456789abcdefghijkl_00607d88
;
; Called Functions:
;   unkafter_asgaya.cpp_FUN_005af9bd
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005ad370
        ;   Label: unkafter_asgaya.cpp_FUN_005ad370
    PUSH ESI                            ; 005ad371
    PUSH EDI                            ; 005ad372
    PUSH ES                             ; 005ad373
    PUSH EBP                            ; 005ad374
    SUB ESP,0x40                        ; 005ad375
    MOV ESI,dword ptr [ESP + 0x58]      ; 005ad378
    MOV EAX,dword ptr [ESP + 0x5c]      ; 005ad37c
    LEA EDI,[ESP + 0x34]                ; 005ad380
    MOV dword ptr [ESP + 0x3c],EAX      ; 005ad384
    MOV AX,DS                           ; 005ad388
    LEA EBP,[ESP + 0x1]                 ; 005ad38a
    MOV ES,AX                           ; 005ad38e
    XOR EDX,EDX                         ; 005ad390
    MOV EAX,dword ptr [ESP + 0x60]      ; 005ad392
    MOVSD ES:EDI,ESI                    ; 005ad396
    MOVSD ES:EDI,ESI                    ; 005ad397
    MOV dword ptr [ESP + 0x2c],EAX      ; 005ad398
    XOR AH,AH                           ; 005ad39c
    MOV dword ptr [ESP + 0x30],EDX      ; 005ad39e
    MOV byte ptr [ESP],AH               ; 005ad3a2
    LEA EDI,[ESP + 0x24]                ; 005ad3a5
        ;   Label: LAB_005ad3a5
    LEA ESI,[ESP + 0x34]                ; 005ad3a9
    LEA EBX,[ESP + 0x2c]                ; 005ad3ad
    LEA EAX,[ESP + 0x34]                ; 005ad3b1
    MOV EDX,dword ptr [EAX + 0x4]       ; 005ad3b5
    MOV EAX,dword ptr [EAX]             ; 005ad3b8
    MOV ECX,dword ptr [EBX + 0x4]       ; 005ad3ba
    MOV EBX,dword ptr [EBX]             ; 005ad3bd
    CALL unkafter_asgaya.cpp_FUN_005af9bd ; 005ad3bf
        ;   XREF to: 005af9bd (UNCONDITIONAL_CALL)  ; undefined unkafter_asgaya.cpp_FUN_005af9bd()
    MOV dword ptr [ESI + 0x4],EDX       ; 005ad3c4
    MOV dword ptr [ESI],EAX             ; 005ad3c7
    MOV dword ptr [EDI + 0x4],ECX       ; 005ad3c9
    MOV dword ptr [EDI],EBX             ; 005ad3cc
    MOV EAX,dword ptr [ESP + 0x24]      ; 005ad3ce
    MOV AL,byte ptr [EAX + 0x607d88]    ; 005ad3d2 | = "0123456789abcdefghijklmnopqrstuvwxyz"
    MOV byte ptr [EBP],AL               ; 005ad3d8
    MOV EBX,dword ptr [ESP + 0x34]      ; 005ad3db
    INC EBP                             ; 005ad3df
    TEST EBX,EBX                        ; 005ad3e0
    JNZ 0x005ad3a5                      ; 005ad3e2
        ;   XREF to: 005ad3a5 (CONDITIONAL_JUMP)  ; LAB_005ad3a5
    CMP dword ptr [ESP + 0x38],0x0      ; 005ad3e4
    JNZ 0x005ad3a5                      ; 005ad3e9
        ;   XREF to: 005ad3a5 (CONDITIONAL_JUMP)  ; LAB_005ad3a5
    MOV EBX,dword ptr [ESP + 0x3c]      ; 005ad3eb
        ;   Label: LAB_005ad3eb
    MOV AL,byte ptr [EBP + -0x1]        ; 005ad3ef
    DEC EBP                             ; 005ad3f2
    LEA ESI,[EBX + 0x1]                 ; 005ad3f3
    MOV byte ptr [EBX],AL               ; 005ad3f6
    MOV dword ptr [ESP + 0x3c],ESI      ; 005ad3f8
    TEST AL,AL                          ; 005ad3fc
    JNZ 0x005ad3eb                      ; 005ad3fe
        ;   XREF to: 005ad3eb (CONDITIONAL_JUMP)  ; LAB_005ad3eb
    MOV EAX,dword ptr [ESP + 0x5c]      ; 005ad400
    ADD ESP,0x40                        ; 005ad404
    POP EBP                             ; 005ad407
    POP ES                              ; 005ad408
    POP EDI                             ; 005ad409
    POP ESI                             ; 005ad40a
    POP EBX                             ; 005ad40b
    RET                                 ; 005ad40c

