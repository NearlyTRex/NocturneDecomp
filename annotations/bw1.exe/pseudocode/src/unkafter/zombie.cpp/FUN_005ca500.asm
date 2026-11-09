; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; char * unkafter_zombie_cpp_FUN_005ca500(longlong *param_1,char *param_2,int param_3)
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
;   crt_unknown.c_FUN_005c3c08 at 005c4038
;
; Referenced Globals:
;   TerminatedCString s_s_0123456789abcdefghijkl_006269e4
;
; Called Functions:
;   crt_unknown.c_FUN_005c215b
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005ca500
        ;   Label: unkafter_zombie.cpp_FUN_005ca500
    PUSH ESI                            ; 005ca501
    PUSH EDI                            ; 005ca502
    PUSH ES                             ; 005ca503
    PUSH EBP                            ; 005ca504
    SUB ESP,0x40                        ; 005ca505
    MOV ESI,dword ptr [ESP + 0x58]      ; 005ca508
    MOV EAX,dword ptr [ESP + 0x5c]      ; 005ca50c
    LEA EDI,[ESP + 0x34]                ; 005ca510
    MOV dword ptr [ESP + 0x3c],EAX      ; 005ca514
    MOV AX,DS                           ; 005ca518
    LEA EBP,[ESP + 0x1]                 ; 005ca51a
    MOV ES,AX                           ; 005ca51e
    XOR EDX,EDX                         ; 005ca520
    MOV EAX,dword ptr [ESP + 0x60]      ; 005ca522
    MOVSD ES:EDI,ESI                    ; 005ca526
    MOVSD ES:EDI,ESI                    ; 005ca527
    MOV dword ptr [ESP + 0x2c],EAX      ; 005ca528
    XOR AH,AH                           ; 005ca52c
    MOV dword ptr [ESP + 0x30],EDX      ; 005ca52e
    MOV byte ptr [ESP],AH               ; 005ca532
    LEA EDI,[ESP + 0x24]                ; 005ca535
        ;   Label: LAB_005ca535
    LEA ESI,[ESP + 0x34]                ; 005ca539
    LEA EBX,[ESP + 0x2c]                ; 005ca53d
    LEA EAX,[ESP + 0x34]                ; 005ca541
    MOV EDX,dword ptr [EAX + 0x4]       ; 005ca545
    MOV EAX,dword ptr [EAX]             ; 005ca548
    MOV ECX,dword ptr [EBX + 0x4]       ; 005ca54a
    MOV EBX,dword ptr [EBX]             ; 005ca54d
    CALL crt_unknown.c_FUN_005c215b     ; 005ca54f
        ;   XREF to: 005c215b (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c215b()
    MOV dword ptr [ESI + 0x4],EDX       ; 005ca554
    MOV dword ptr [ESI],EAX             ; 005ca557
    MOV dword ptr [EDI + 0x4],ECX       ; 005ca559
    MOV dword ptr [EDI],EBX             ; 005ca55c
    MOV EAX,dword ptr [ESP + 0x24]      ; 005ca55e
    MOV AL,byte ptr [EAX + 0x6269e4]    ; 005ca562 | = "0123456789abcdefghijklmnopqrstuvwxyz"
    MOV byte ptr [EBP],AL               ; 005ca568
    MOV EBX,dword ptr [ESP + 0x34]      ; 005ca56b
    INC EBP                             ; 005ca56f
    TEST EBX,EBX                        ; 005ca570
    JNZ 0x005ca535                      ; 005ca572
        ;   XREF to: 005ca535 (CONDITIONAL_JUMP)  ; LAB_005ca535
    CMP dword ptr [ESP + 0x38],0x0      ; 005ca574
    JNZ 0x005ca535                      ; 005ca579
        ;   XREF to: 005ca535 (CONDITIONAL_JUMP)  ; LAB_005ca535
    MOV EBX,dword ptr [ESP + 0x3c]      ; 005ca57b
        ;   Label: LAB_005ca57b
    MOV AL,byte ptr [EBP + -0x1]        ; 005ca57f
    DEC EBP                             ; 005ca582
    LEA ESI,[EBX + 0x1]                 ; 005ca583
    MOV byte ptr [EBX],AL               ; 005ca586
    MOV dword ptr [ESP + 0x3c],ESI      ; 005ca588
    TEST AL,AL                          ; 005ca58c
    JNZ 0x005ca57b                      ; 005ca58e
        ;   XREF to: 005ca57b (CONDITIONAL_JUMP)  ; LAB_005ca57b
    MOV EAX,dword ptr [ESP + 0x5c]      ; 005ca590
    ADD ESP,0x40                        ; 005ca594
    POP EBP                             ; 005ca597
    POP ES                              ; 005ca598
    POP EDI                             ; 005ca599
    POP ESI                             ; 005ca59a
    POP EBX                             ; 005ca59b
    RET                                 ; 005ca59c

