; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_1000b4f0(uint param_1,undefined4 param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_10241870
;   undefined4 DAT_10241970
;
; Called Functions:
;   __chsize_lk
;   __lock_fhandle
;   __unlock_fhandle
;   FUN_10008a20
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 1000b4f0
        ;   Label: FUN_1000b4f0
    PUSH EDI                            ; 1000b4f1
    MOV ESI,dword ptr [ESP + 0xc]       ; 1000b4f2
    CMP ESI,dword ptr [0x10241970]      ; 1000b4f6 | DAT_10241970
    JNC 0x1000b545                      ; 1000b4fc
        ;   XREF to: 1000b545 (CONDITIONAL_JUMP)  ; LAB_1000b545
    MOV EAX,ESI                         ; 1000b4fe
    MOV ECX,ESI                         ; 1000b500
    AND EAX,0xffffffe7                  ; 1000b502
    AND ECX,0x1f                        ; 1000b505
    SAR EAX,0x3                         ; 1000b508
    SHL ECX,0x2                         ; 1000b50b
    MOV EDX,dword ptr [EAX + 0x10241870] ; 1000b50e | DAT_10241870
    LEA EAX,[ECX + ECX*0x8]             ; 1000b514
    TEST byte ptr [EDX + EAX*0x1 + 0x4],0x1 ; 1000b517
    JZ 0x1000b545                       ; 1000b51c
        ;   XREF to: 1000b545 (CONDITIONAL_JUMP)  ; LAB_1000b545
    PUSH ESI                            ; 1000b51e
    CALL __lock_fhandle                 ; 1000b51f
        ;   XREF to: 10008de0 (UNCONDITIONAL_CALL)  ; int __lock_fhandle(int _Filehandle)
    MOV EAX,dword ptr [ESP + 0x14]      ; 1000b524
    ADD ESP,0x4                         ; 1000b528
    PUSH EAX                            ; 1000b52b
    PUSH ESI                            ; 1000b52c
    CALL __chsize_lk                    ; 1000b52d
        ;   XREF to: 1000b560 (UNCONDITIONAL_CALL)  ; undefined __chsize_lk()
    ADD ESP,0x8                         ; 1000b532
    MOV EDI,EAX                         ; 1000b535
    PUSH ESI                            ; 1000b537
    CALL __unlock_fhandle               ; 1000b538
        ;   XREF to: 10008e50 (UNCONDITIONAL_CALL)  ; void __unlock_fhandle(int _Filehandle)
    ADD ESP,0x4                         ; 1000b53d
    MOV EAX,EDI                         ; 1000b540
    POP EDI                             ; 1000b542
    POP ESI                             ; 1000b543
    RET                                 ; 1000b544
    CALL FUN_10008a20                   ; 1000b545
        ;   XREF to: 10008a20 (UNCONDITIONAL_CALL)  ; undefined FUN_10008a20()
        ;   Label: LAB_1000b545
    POP EDI                             ; 1000b54a
    MOV dword ptr [EAX],0x9             ; 1000b54b
    MOV EAX,0xffffffff                  ; 1000b551
    POP ESI                             ; 1000b556
    RET                                 ; 1000b557

