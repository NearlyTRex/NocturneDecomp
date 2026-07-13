; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl __mtinit(void)
;
;
; XREF[1]:
;   FUN_100056a0 at 10005739
;
; Referenced Globals:
;   undefined4 DAT_10016da4
;   void* PTR_GetCurrentThreadId_102421d8 = 0024245e
;   void* PTR_TlsSetValue_102421dc = 00242474
;   void* PTR_TlsAlloc_102421e0 = 00242482
;
; Called Functions:
;   __initptd
;   __mtinitlocks
;   FUN_1000a750
;   GetCurrentThreadId
;   TlsAlloc
;   TlsSetValue
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 10007700
        ;   Label: __mtinit
    CALL __mtinitlocks                  ; 10007701
        ;   XREF to: 10005900 (UNCONDITIONAL_CALL)  ; int __mtinitlocks()
    CALL dword ptr [0x102421e0]         ; 10007706 | PTR_TlsAlloc_102421e0
    MOV [0x10016da4],EAX                ; 1000770c | DAT_10016da4
    CMP EAX,-0x1                        ; 10007711
    JNZ 0x1000771a                      ; 10007714
        ;   XREF to: 1000771a (CONDITIONAL_JUMP)  ; LAB_1000771a
    XOR EAX,EAX                         ; 10007716
    POP ESI                             ; 10007718
    RET                                 ; 10007719
    PUSH 0x74                           ; 1000771a
        ;   Label: LAB_1000771a
    PUSH 0x1                            ; 1000771c
    CALL FUN_1000a750                   ; 1000771e
        ;   XREF to: 1000a750 (UNCONDITIONAL_CALL)  ; undefined FUN_1000a750()
    ADD ESP,0x8                         ; 10007723
    MOV ESI,EAX                         ; 10007726
    TEST ESI,ESI                        ; 10007728
    JZ 0x1000775c                       ; 1000772a
        ;   XREF to: 1000775c (CONDITIONAL_JUMP)  ; LAB_1000775c
    PUSH ESI                            ; 1000772c
    MOV EAX,[0x10016da4]                ; 1000772d | DAT_10016da4
    PUSH EAX                            ; 10007732
    CALL dword ptr [0x102421dc]         ; 10007733 | PTR_TlsSetValue_102421dc
    TEST EAX,EAX                        ; 10007739
    JZ 0x1000775c                       ; 1000773b
        ;   XREF to: 1000775c (CONDITIONAL_JUMP)  ; LAB_1000775c
    PUSH ESI                            ; 1000773d
    CALL __initptd                      ; 1000773e
        ;   XREF to: 10007790 (UNCONDITIONAL_CALL)  ; void __initptd(_ptiddata _Ptd, pthreadlocinfo _Locale)
    ADD ESP,0x4                         ; 10007743
    CALL dword ptr [0x102421d8]         ; 10007746 | PTR_GetCurrentThreadId_102421d8
    MOV dword ptr [ESI],EAX             ; 1000774c
    MOV EAX,0x1                         ; 1000774e
    MOV dword ptr [ESI + 0x4],0xffffffff ; 10007753
    POP ESI                             ; 1000775a
    RET                                 ; 1000775b
    XOR EAX,EAX                         ; 1000775c
        ;   Label: LAB_1000775c
    POP ESI                             ; 1000775e
    RET                                 ; 1000775f

