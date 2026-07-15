; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl APIDLLlockHoldBuffer(void)
;
;
; Referenced Globals:
;   undefined4 DAT_10014178
;   undefined4 DAT_100141b8
;   undefined4 DAT_10138fb4
;   undefined4 DAT_10226e88
;   undefined4 DAT_10226e98
;   undefined4 DAT_10226eac
;
; Called Functions:
;   FUN_10002e20
;
; *****************************************************************************

section .text

    PUSH 0x10226e88                     ; 10005350 | DAT_10226e88
        ;   Label: APIDLLlockHoldBuffer
    MOV EAX,[0x100141b8]                ; 10005355 | DAT_100141b8
    PUSH EAX                            ; 1000535a
    CALL FUN_10002e20                   ; 1000535b
        ;   XREF to: 10002e20 (UNCONDITIONAL_CALL)  ; undefined FUN_10002e20()
    ADD ESP,0x8                         ; 10005360
    TEST EAX,EAX                        ; 10005363
    JNZ 0x1000536a                      ; 10005365
        ;   XREF to: 1000536a (CONDITIONAL_JUMP)  ; LAB_1000536a
    XOR EAX,EAX                         ; 10005367
    RET                                 ; 10005369
    MOV ECX,dword ptr [0x10226eac]      ; 1000536a | DAT_10226eac
        ;   Label: LAB_1000536a
    MOV EAX,[0x10014178]                ; 10005370 | DAT_10014178
    TEST EAX,EAX                        ; 10005375
    JLE 0x1000538d                      ; 10005377
        ;   XREF to: 1000538d (CONDITIONAL_JUMP)  ; LAB_1000538d
    MOV EDX,dword ptr [0x10138fb4]      ; 10005379 | DAT_10138fb4
    MOV dword ptr [EDX],ECX             ; 1000537f
        ;   Label: LAB_1000537f
    ADD EDX,0x4                         ; 10005381
    ADD ECX,dword ptr [0x10226e98]      ; 10005384 | DAT_10226e98
    DEC EAX                             ; 1000538a
    JNZ 0x1000537f                      ; 1000538b
        ;   XREF to: 1000537f (CONDITIONAL_JUMP)  ; LAB_1000537f
    MOV EAX,0x1                         ; 1000538d
        ;   Label: LAB_1000538d
    RET                                 ; 10005392

