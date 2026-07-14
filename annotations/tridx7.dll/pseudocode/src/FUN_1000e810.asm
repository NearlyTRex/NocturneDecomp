; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_1000e810(uint param_1,undefined4 param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_10241870
;   undefined4 DAT_10241970
;
; Called Functions:
;   __lock_fhandle
;   __setmode_lk
;   __unlock_fhandle
;   FUN_10008a20
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 1000e810
        ;   Label: FUN_1000e810
    PUSH EDI                            ; 1000e811
    MOV ESI,dword ptr [ESP + 0xc]       ; 1000e812
    CMP ESI,dword ptr [0x10241970]      ; 1000e816 | DAT_10241970
    JNC 0x1000e865                      ; 1000e81c
        ;   XREF to: 1000e865 (CONDITIONAL_JUMP)  ; LAB_1000e865
    MOV EAX,ESI                         ; 1000e81e
    MOV ECX,ESI                         ; 1000e820
    AND EAX,0xffffffe7                  ; 1000e822
    AND ECX,0x1f                        ; 1000e825
    SAR EAX,0x3                         ; 1000e828
    SHL ECX,0x2                         ; 1000e82b
    MOV EDX,dword ptr [EAX + 0x10241870] ; 1000e82e | DAT_10241870
    LEA EAX,[ECX + ECX*0x8]             ; 1000e834
    TEST byte ptr [EDX + EAX*0x1 + 0x4],0x1 ; 1000e837
    JZ 0x1000e865                       ; 1000e83c
        ;   XREF to: 1000e865 (CONDITIONAL_JUMP)  ; LAB_1000e865
    PUSH ESI                            ; 1000e83e
    CALL __lock_fhandle                 ; 1000e83f
        ;   XREF to: 10008de0 (UNCONDITIONAL_CALL)  ; int __lock_fhandle(int _Filehandle)
    MOV EAX,dword ptr [ESP + 0x14]      ; 1000e844
    ADD ESP,0x4                         ; 1000e848
    PUSH EAX                            ; 1000e84b
    PUSH ESI                            ; 1000e84c
    CALL __setmode_lk                   ; 1000e84d
        ;   XREF to: 1000e880 (UNCONDITIONAL_CALL)  ; undefined __setmode_lk()
    ADD ESP,0x8                         ; 1000e852
    MOV EDI,EAX                         ; 1000e855
    PUSH ESI                            ; 1000e857
    CALL __unlock_fhandle               ; 1000e858
        ;   XREF to: 10008e50 (UNCONDITIONAL_CALL)  ; void __unlock_fhandle(int _Filehandle)
    ADD ESP,0x4                         ; 1000e85d
    MOV EAX,EDI                         ; 1000e860
    POP EDI                             ; 1000e862
    POP ESI                             ; 1000e863
    RET                                 ; 1000e864
    CALL FUN_10008a20                   ; 1000e865
        ;   XREF to: 10008a20 (UNCONDITIONAL_CALL)  ; undefined FUN_10008a20()
        ;   Label: LAB_1000e865
    POP EDI                             ; 1000e86a
    MOV dword ptr [EAX],0x9             ; 1000e86b
    MOV EAX,0xffffffff                  ; 1000e871
    POP ESI                             ; 1000e876
    RET                                 ; 1000e877

