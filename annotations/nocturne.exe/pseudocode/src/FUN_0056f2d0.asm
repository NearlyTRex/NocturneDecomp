; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0056f2d0(void)
;
;
; XREF[2]:
;   FUN_0056e7fc at 0056e840
;   crt_heap.c_SystemAllocWrapper_FUN_00568e08 at 00568e08
;
; Referenced Globals:
;   undefined4 DAT_005c1680
;   void* PTR_crt_sync.c_CriticalSectionStub_FUN_005671e4_005c1ad8 = 005671e4
;   void* PTR_crt_sync.c_CriticalSectionStub_FUN_005671e4_005c1ae0 = 005671e4
;
; Called Functions:
;   crt_sync.c_CriticalSectionStub_FUN_005671e4
;   FUN_0056f36c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056f2d0
        ;   Label: FUN_0056f2d0
    PUSH ESI                            ; 0056f2d1
    CALL dword ptr [0x005c1ad8]         ; 0056f2d2 | PTR_crt_sync.c_CriticalSectionStub_FUN_005671e4_005c1ad8
    MOV EAX,[0x005c1680]                ; 0056f2d8 | DAT_005c1680
    TEST EAX,EAX                        ; 0056f2dd
    JZ 0x0056f301                       ; 0056f2df
        ;   XREF to: 0056f301 (CONDITIONAL_JUMP)  ; LAB_0056f301
    MOV EDX,dword ptr [EAX]             ; 0056f2e1
        ;   Label: LAB_0056f2e1
    MOV ECX,dword ptr [EAX + 0x24]      ; 0056f2e3
    SUB EDX,0x2c                        ; 0056f2e6
    MOV ESI,dword ptr [ECX]             ; 0056f2e9
    MOV EBX,dword ptr [EAX + 0x8]       ; 0056f2eb
    CMP EDX,ESI                         ; 0056f2ee
    JNZ 0x0056f2fb                      ; 0056f2f0
        ;   XREF to: 0056f2fb (CONDITIONAL_JUMP)  ; LAB_0056f2fb
    PUSH EAX                            ; 0056f2f2
    CALL FUN_0056f36c                   ; 0056f2f3
        ;   XREF to: 0056f36c (UNCONDITIONAL_CALL)  ; undefined FUN_0056f36c()
    ADD ESP,0x4                         ; 0056f2f8
    MOV EAX,EBX                         ; 0056f2fb
        ;   Label: LAB_0056f2fb
    TEST EBX,EBX                        ; 0056f2fd
    JNZ 0x0056f2e1                      ; 0056f2ff
        ;   XREF to: 0056f2e1 (CONDITIONAL_JUMP)  ; LAB_0056f2e1
    CALL dword ptr [0x005c1ae0]         ; 0056f301 | PTR_crt_sync.c_CriticalSectionStub_FUN_005671e4_005c1ae0
        ;   Label: LAB_0056f301
    XOR EAX,EAX                         ; 0056f307
    POP ESI                             ; 0056f309
    POP EBX                             ; 0056f30a
    RET                                 ; 0056f30b

