; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 __cdecl crt_stdio_c_fclose_FUN_00563380(int param_1)
;
;
; XREF[64]:
;   FUN_00401010 at 004010de
;   FUN_00446810 at 00446dee
;   FUN_00467890 at 004678bf
;   FUN_0049cc10 at 0049d82c
;   FUN_0049f930 at 004a0008
;   FUN_004a3b90 at 004a3e03
;   FUN_004a4170 at 004a43cd
;   FUN_004a4b50 at 004a4bf1
;   FUN_004a57c0 at 004a58b4
;   FUN_004c85f0 at 004c8653
;   ... and 54 more
;
; Referenced Globals:
;   void* PTR_FUN_005c1ad0 = 005671e4
;   void* PTR_FUN_005c1ad4 = 005671e4
;   undefined4 DAT_02de4e20
;
; Called Functions:
;   FUN_005633c4
;   FUN_005671e4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00563380
        ;   Label: crt_stdio.c_fclose_FUN_00563380
    MOV EBX,dword ptr [ESP + 0x8]       ; 00563381
    CALL dword ptr [0x005c1ad0]         ; 00563385 | PTR_FUN_005c1ad0
    MOV EAX,[0x02de4e20]                ; 0056338b | DAT_02de4e20
    TEST EAX,EAX                        ; 00563390
    JNZ 0x005633a1                      ; 00563392
        ;   XREF to: 005633a1 (CONDITIONAL_JUMP)  ; LAB_005633a1
    CALL dword ptr [0x005c1ad4]         ; 00563394 | PTR_FUN_005c1ad4
        ;   Label: LAB_00563394
    MOV EAX,0xffffffff                  ; 0056339a
    POP EBX                             ; 0056339f
    RET                                 ; 005633a0
    CMP EBX,dword ptr [EAX + 0x4]       ; 005633a1
        ;   Label: LAB_005633a1
    JZ 0x005633ae                       ; 005633a4
        ;   XREF to: 005633ae (CONDITIONAL_JUMP)  ; LAB_005633ae
    MOV EAX,dword ptr [EAX]             ; 005633a6
    TEST EAX,EAX                        ; 005633a8
    JZ 0x00563394                       ; 005633aa
        ;   XREF to: 00563394 (CONDITIONAL_JUMP)  ; LAB_00563394
    JMP 0x005633a1                      ; 005633ac
        ;   XREF to: 005633a1 (UNCONDITIONAL_JUMP)  ; LAB_005633a1
    CALL dword ptr [0x005c1ad4]         ; 005633ae | PTR_FUN_005c1ad4
        ;   Label: LAB_005633ae
    PUSH 0x1                            ; 005633b4
    PUSH EBX                            ; 005633b6
    CALL FUN_005633c4                   ; 005633b7
        ;   XREF to: 005633c4 (UNCONDITIONAL_CALL)  ; undefined FUN_005633c4()
    ADD ESP,0x8                         ; 005633bc
    POP EBX                             ; 005633bf
    RET                                 ; 005633c0

