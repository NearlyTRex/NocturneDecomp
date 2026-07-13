; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004b5490(int param_1)
;
;
; XREF[6]:
;   FUN_00439f50 at 0043a365
;   FUN_00495a20 at 00496bc1
;   FUN_004b32d0 at 004b3732
;   FUN_004b9fe0 at 004ba555
;   FUN_00537cd0 at 005382ab
;   FUN_00541d00 at 0054223d
;
; Called Functions:
;   FUN_004c6500
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b5490
        ;   Label: FUN_004b5490
    MOV EBX,dword ptr [ESP + 0x8]       ; 004b5491
    MOV EDX,dword ptr [EBX + 0x1fa10]   ; 004b5495
    XOR EAX,EAX                         ; 004b549b
    TEST EDX,EDX                        ; 004b549d
    JNZ 0x004b54a3                      ; 004b549f
        ;   XREF to: 004b54a3 (CONDITIONAL_JUMP)  ; LAB_004b54a3
    POP EBX                             ; 004b54a1
    RET                                 ; 004b54a2
    PUSH EDX                            ; 004b54a3
        ;   Label: LAB_004b54a3
    CALL FUN_004c6500                   ; 004b54a4
        ;   XREF to: 004c6500 (UNCONDITIONAL_CALL)  ; undefined FUN_004c6500()
    MOV EAX,0x1                         ; 004b54a9
    ADD ESP,0x4                         ; 004b54ae
    MOV dword ptr [EBX + 0x1fa10],0x0   ; 004b54b1
    POP EBX                             ; 004b54bb
    RET                                 ; 004b54bc

