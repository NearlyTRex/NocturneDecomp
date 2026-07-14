; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; _ptiddata __cdecl __getptd(void)
;
;
; XREF[6]:
;   FUN_10008a20 at 10008a20
;   FUN_10008a30 at 10008a30
;   FUN_1000a7b0 at 1000a7b4
;   FUN_1000b950 at 1000b9a8
;   FUN_1000bbc0 at 1000bc01
;   FUN_1000bdf0 at 1000bdf0
;
; Referenced Globals:
;   undefined4 DAT_10016da4
;   void* PTR_GetLastError_102421c8 = 00242418
;   void* PTR_GetCurrentThreadId_102421d8 = 0024245e
;   void* PTR_TlsSetValue_102421dc = 00242474
;   void* PTR_SetLastError_102421e8 = 00242498
;   void* PTR_TlsGetValue_102421ec = 002424a8
;
; Called Functions:
;   __amsg_exit
;   __initptd
;   FUN_1000a750
;   GetCurrentThreadId
;   GetLastError
;   SetLastError
;   TlsGetValue
;   TlsSetValue
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 100077b0
        ;   Label: __getptd
    PUSH EDI                            ; 100077b1
    CALL dword ptr [0x102421c8]         ; 100077b2 | PTR_GetLastError_102421c8
    MOV ESI,EAX                         ; 100077b8
    MOV EAX,[0x10016da4]                ; 100077ba | DAT_10016da4
    PUSH EAX                            ; 100077bf
    CALL dword ptr [0x102421ec]         ; 100077c0 | PTR_TlsGetValue_102421ec
    MOV EDI,EAX                         ; 100077c6
    TEST EDI,EDI                        ; 100077c8
    JNZ 0x10007813                      ; 100077ca
        ;   XREF to: 10007813 (CONDITIONAL_JUMP)  ; LAB_10007813
    PUSH 0x74                           ; 100077cc
    PUSH 0x1                            ; 100077ce
    CALL FUN_1000a750                   ; 100077d0
        ;   XREF to: 1000a750 (UNCONDITIONAL_CALL)  ; undefined FUN_1000a750()
    ADD ESP,0x8                         ; 100077d5
    MOV EDI,EAX                         ; 100077d8
    TEST EDI,EDI                        ; 100077da
    JZ 0x10007809                       ; 100077dc
        ;   XREF to: 10007809 (CONDITIONAL_JUMP)  ; LAB_10007809
    PUSH EDI                            ; 100077de
    MOV EAX,[0x10016da4]                ; 100077df | DAT_10016da4
    PUSH EAX                            ; 100077e4
    CALL dword ptr [0x102421dc]         ; 100077e5 | PTR_TlsSetValue_102421dc
    TEST EAX,EAX                        ; 100077eb
    JZ 0x10007809                       ; 100077ed
        ;   XREF to: 10007809 (CONDITIONAL_JUMP)  ; LAB_10007809
    PUSH EDI                            ; 100077ef
    CALL __initptd                      ; 100077f0
        ;   XREF to: 10007790 (UNCONDITIONAL_CALL)  ; void __initptd(_ptiddata _Ptd, pthreadlocinfo _Locale)
    ADD ESP,0x4                         ; 100077f5
    CALL dword ptr [0x102421d8]         ; 100077f8 | PTR_GetCurrentThreadId_102421d8
    MOV dword ptr [EDI],EAX             ; 100077fe
    MOV dword ptr [EDI + 0x4],0xffffffff ; 10007800
    JMP 0x10007813                      ; 10007807
        ;   XREF to: 10007813 (UNCONDITIONAL_JUMP)  ; LAB_10007813
    PUSH 0x10                           ; 10007809
        ;   Label: LAB_10007809
    CALL __amsg_exit                    ; 1000780b
        ;   XREF to: 100058c0 (UNCONDITIONAL_CALL)  ; void __amsg_exit(int param_1)
    ADD ESP,0x4                         ; 10007810
    PUSH ESI                            ; 10007813
        ;   Label: LAB_10007813
    CALL dword ptr [0x102421e8]         ; 10007814 | PTR_SetLastError_102421e8
    MOV EAX,EDI                         ; 1000781a
    POP EDI                             ; 1000781c
    POP ESI                             ; 1000781d
    RET                                 ; 1000781e

