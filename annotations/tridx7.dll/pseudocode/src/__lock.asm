; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl __lock(int _File)
;
; Parameters:
; int              Stack[0x4]:4   _File
;
; XREF[26]:
;   FUN_10005a70 at 10005a80
;   FUN_10005d90 at 10005da1
;   FUN_10006c40 at 10006c4a
;   FUN_100076c0 at 100076c2
;   FUN_1000aaf0 at 1000aaf3
;   FUN_1000ab70 at 1000ab7d
;   FUN_1000ac10 at 1000ac34
;   FUN_1000b950 at 1000ba2d
;   FUN_1000bb30 at 1000bb34
;   FUN_1000bbc0 at 1000bc5e
;   ... and 16 more
;
; Referenced Globals:
;   undefined4 DAT_10016c78
;   void* PTR_InitializeCriticalSection_102421b0 = 00242398
;   void* PTR_EnterCriticalSection_102421b8 = 002423cc
;
; Called Functions:
;   __amsg_exit
;   EnterCriticalSection
;   FUN_10005a10
;   FUN_10005b30
;   FUN_10008830
;   InitializeCriticalSection
;
; *****************************************************************************

section .text

    PUSH EBP                            ; 100059a0
        ;   Label: __lock
    MOV EAX,dword ptr [ESP + 0x8]       ; 100059a1
    MOV EBP,ESP                         ; 100059a5
    PUSH ESI                            ; 100059a7
    PUSH EDI                            ; 100059a8
    LEA EDI,[EAX*0x4 + 0x10016c78]      ; 100059a9 | DAT_10016c78
    CMP dword ptr [EDI],0x0             ; 100059b0 | DAT_10016c78
    JNZ 0x100059fb                      ; 100059b3
        ;   XREF to: 100059fb (CONDITIONAL_JUMP)  ; LAB_100059fb
    PUSH 0x18                           ; 100059b5
    CALL FUN_10008830                   ; 100059b7
        ;   XREF to: 10008830 (UNCONDITIONAL_CALL)  ; undefined FUN_10008830()
    ADD ESP,0x4                         ; 100059bc
    MOV ESI,EAX                         ; 100059bf
    TEST ESI,ESI                        ; 100059c1
    JNZ 0x100059cf                      ; 100059c3
        ;   XREF to: 100059cf (CONDITIONAL_JUMP)  ; LAB_100059cf
    PUSH 0x11                           ; 100059c5
    CALL __amsg_exit                    ; 100059c7
        ;   XREF to: 100058c0 (UNCONDITIONAL_CALL)  ; void __amsg_exit(int param_1)
    ADD ESP,0x4                         ; 100059cc
    PUSH 0x11                           ; 100059cf
        ;   Label: LAB_100059cf
    CALL __lock                         ; 100059d1
        ;   XREF to: 100059a0 (UNCONDITIONAL_CALL)  ; void __lock(int _File)
    ADD ESP,0x4                         ; 100059d6
    CMP dword ptr [EDI],0x0             ; 100059d9 | DAT_10016c78
    PUSH ESI                            ; 100059dc
    JNZ 0x100059e9                      ; 100059dd
        ;   XREF to: 100059e9 (CONDITIONAL_JUMP)  ; LAB_100059e9
    CALL dword ptr [0x102421b0]         ; 100059df | PTR_InitializeCriticalSection_102421b0
    MOV dword ptr [EDI],ESI             ; 100059e5 | DAT_10016c78
    JMP 0x100059f1                      ; 100059e7
        ;   XREF to: 100059f1 (UNCONDITIONAL_JUMP)  ; LAB_100059f1
    CALL FUN_10005b30                   ; 100059e9
        ;   XREF to: 10005b30 (UNCONDITIONAL_CALL)  ; undefined FUN_10005b30()
        ;   Label: LAB_100059e9
    ADD ESP,0x4                         ; 100059ee
    PUSH 0x11                           ; 100059f1
        ;   Label: LAB_100059f1
    CALL FUN_10005a10                   ; 100059f3
        ;   XREF to: 10005a10 (UNCONDITIONAL_CALL)  ; undefined FUN_10005a10()
    ADD ESP,0x4                         ; 100059f8
    MOV EAX,dword ptr [EDI]             ; 100059fb | DAT_10016c78
        ;   Label: LAB_100059fb
    PUSH EAX                            ; 100059fd
    CALL dword ptr [0x102421b8]         ; 100059fe | PTR_EnterCriticalSection_102421b8
    POP EDI                             ; 10005a04
    POP ESI                             ; 10005a05
    POP EBP                             ; 10005a06
    RET                                 ; 10005a07

