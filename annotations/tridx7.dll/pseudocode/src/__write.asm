; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl __write(int _FileHandle,void *_Buf,uint _MaxCharCount)
;
; Parameters:
; int              Stack[0x4]:4   _FileHandle
; void *           Stack[0x8]:4   _Buf
; uint             Stack[0xc]:4   _MaxCharCount
;
; XREF[1]:
;   FUN_10007420 at 10007514
;
; Referenced Globals:
;   undefined4 DAT_10241870
;   undefined4 DAT_10241970
;
; Called Functions:
;   __lock_fhandle
;   __lseek_lk
;   __unlock_fhandle
;   FUN_10008a20
;   FUN_10008a30
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 1000a5f0
        ;   Label: __write
    PUSH EDI                            ; 1000a5f1
    MOV ESI,dword ptr [ESP + 0xc]       ; 1000a5f2
    CMP dword ptr [0x10241970],ESI      ; 1000a5f6 | DAT_10241970
    JBE 0x1000a64a                      ; 1000a5fc
        ;   XREF to: 1000a64a (CONDITIONAL_JUMP)  ; LAB_1000a64a
    MOV EAX,ESI                         ; 1000a5fe
    MOV ECX,ESI                         ; 1000a600
    AND EAX,0xffffffe7                  ; 1000a602
    AND ECX,0x1f                        ; 1000a605
    SAR EAX,0x3                         ; 1000a608
    SHL ECX,0x2                         ; 1000a60b
    MOV EDX,dword ptr [EAX + 0x10241870] ; 1000a60e | DAT_10241870
    LEA EAX,[ECX + ECX*0x8]             ; 1000a614
    TEST byte ptr [EDX + EAX*0x1 + 0x4],0x1 ; 1000a617
    JZ 0x1000a64a                       ; 1000a61c
        ;   XREF to: 1000a64a (CONDITIONAL_JUMP)  ; LAB_1000a64a
    PUSH ESI                            ; 1000a61e
    CALL __lock_fhandle                 ; 1000a61f
        ;   XREF to: 10008de0 (UNCONDITIONAL_CALL)  ; int __lock_fhandle(int _Filehandle)
    MOV EAX,dword ptr [ESP + 0x18]      ; 1000a624
    MOV ECX,dword ptr [ESP + 0x14]      ; 1000a628
    ADD ESP,0x4                         ; 1000a62c
    PUSH EAX                            ; 1000a62f
    PUSH ECX                            ; 1000a630
    PUSH ESI                            ; 1000a631
    CALL __lseek_lk                     ; 1000a632
        ;   XREF to: 1000a670 (UNCONDITIONAL_CALL)  ; undefined __lseek_lk()
    ADD ESP,0xc                         ; 1000a637
    MOV EDI,EAX                         ; 1000a63a
    PUSH ESI                            ; 1000a63c
    CALL __unlock_fhandle               ; 1000a63d
        ;   XREF to: 10008e50 (UNCONDITIONAL_CALL)  ; void __unlock_fhandle(int _Filehandle)
    ADD ESP,0x4                         ; 1000a642
    MOV EAX,EDI                         ; 1000a645
    POP EDI                             ; 1000a647
    POP ESI                             ; 1000a648
    RET                                 ; 1000a649
    CALL FUN_10008a20                   ; 1000a64a
        ;   XREF to: 10008a20 (UNCONDITIONAL_CALL)  ; undefined FUN_10008a20()
        ;   Label: LAB_1000a64a
    MOV dword ptr [EAX],0x9             ; 1000a64f
    CALL FUN_10008a30                   ; 1000a655
        ;   XREF to: 10008a30 (UNCONDITIONAL_CALL)  ; undefined FUN_10008a30()
    POP EDI                             ; 1000a65a
    MOV dword ptr [EAX],0x0             ; 1000a65b
    MOV EAX,0xffffffff                  ; 1000a661
    POP ESI                             ; 1000a666
    RET                                 ; 1000a667

