; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_0056aefc(uint param_1)
;
;
; XREF[2]:
;   FUN_0056aef0 at 0056aef2
;   crt_unknown.c_FillInputBuffer_FUN_00564670 at 0056469c
;
; Referenced Globals:
;   void* PTR_crt_sync.c_CriticalSectionStub_FUN_005671e4_005c1ad0 = 005671e4
;   void* PTR_crt_sync.c_CriticalSectionStub_FUN_005671e4_005c1ad4 = 005671e4
;   undefined4 DAT_02de4e20
;
; Called Functions:
;   crt_sync.c_CriticalSectionStub_FUN_005671e4
;   FUN_00568890
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056aefc
        ;   Label: FUN_0056aefc
    PUSH ESI                            ; 0056aefd
    PUSH EDI                            ; 0056aefe
    MOV EDI,dword ptr [ESP + 0x10]      ; 0056aeff
    CALL dword ptr [0x005c1ad0]         ; 0056af03 | PTR_crt_sync.c_CriticalSectionStub_FUN_005671e4_005c1ad0
    MOV EBX,dword ptr [0x02de4e20]      ; 0056af09 | DAT_02de4e20
    XOR ESI,ESI                         ; 0056af0f
    TEST EBX,EBX                        ; 0056af11
    JZ 0x0056af35                       ; 0056af13
        ;   XREF to: 0056af35 (CONDITIONAL_JUMP)  ; LAB_0056af35
    MOV EAX,dword ptr [EBX + 0x4]       ; 0056af15
        ;   Label: LAB_0056af15
    TEST dword ptr [EAX + 0xc],EDI      ; 0056af18
    JZ 0x0056af2f                       ; 0056af1b
        ;   XREF to: 0056af2f (CONDITIONAL_JUMP)  ; LAB_0056af2f
    MOV DL,byte ptr [EAX + 0xd]         ; 0056af1d
    INC ESI                             ; 0056af20
    TEST DL,0x10                        ; 0056af21
    JZ 0x0056af2f                       ; 0056af24
        ;   XREF to: 0056af2f (CONDITIONAL_JUMP)  ; LAB_0056af2f
    PUSH EAX                            ; 0056af26
    CALL FUN_00568890                   ; 0056af27
        ;   XREF to: 00568890 (UNCONDITIONAL_CALL)  ; undefined FUN_00568890()
    ADD ESP,0x4                         ; 0056af2c
    MOV EBX,dword ptr [EBX]             ; 0056af2f
        ;   Label: LAB_0056af2f
    TEST EBX,EBX                        ; 0056af31
    JNZ 0x0056af15                      ; 0056af33
        ;   XREF to: 0056af15 (CONDITIONAL_JUMP)  ; LAB_0056af15
    CALL dword ptr [0x005c1ad4]         ; 0056af35 | PTR_crt_sync.c_CriticalSectionStub_FUN_005671e4_005c1ad4
        ;   Label: LAB_0056af35
    MOV EAX,ESI                         ; 0056af3b
    POP EDI                             ; 0056af3d
    POP ESI                             ; 0056af3e
    POP EBX                             ; 0056af3f
    RET                                 ; 0056af40

