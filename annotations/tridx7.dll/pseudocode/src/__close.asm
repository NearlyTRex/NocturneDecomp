; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl __close(int _FileHandle)
;
; Parameters:
; int              Stack[0x4]:4   _FileHandle
;
; XREF[2]:
;   FUN_100093f0 at 1000973c
;   __fclose_lk at 10005499
;
; Referenced Globals:
;   undefined4 DAT_10241870
;   undefined4 DAT_10241970
;
; Called Functions:
;   __close_lk
;   __lock_fhandle
;   __unlock_fhandle
;   FUN_10008a20
;   FUN_10008a30
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 10005b50
        ;   Label: __close
    PUSH EDI                            ; 10005b51
    MOV ESI,dword ptr [ESP + 0xc]       ; 10005b52
    CMP dword ptr [0x10241970],ESI      ; 10005b56 | DAT_10241970
    JBE 0x10005ba0                      ; 10005b5c
        ;   XREF to: 10005ba0 (CONDITIONAL_JUMP)  ; LAB_10005ba0
    MOV EAX,ESI                         ; 10005b5e
    MOV ECX,ESI                         ; 10005b60
    AND EAX,0xffffffe7                  ; 10005b62
    AND ECX,0x1f                        ; 10005b65
    SAR EAX,0x3                         ; 10005b68
    SHL ECX,0x2                         ; 10005b6b
    MOV EDX,dword ptr [EAX + 0x10241870] ; 10005b6e | DAT_10241870
    LEA EAX,[ECX + ECX*0x8]             ; 10005b74
    TEST byte ptr [EDX + EAX*0x1 + 0x4],0x1 ; 10005b77
    JZ 0x10005ba0                       ; 10005b7c
        ;   XREF to: 10005ba0 (CONDITIONAL_JUMP)  ; LAB_10005ba0
    PUSH ESI                            ; 10005b7e
    CALL __lock_fhandle                 ; 10005b7f
        ;   XREF to: 10008de0 (UNCONDITIONAL_CALL)  ; int __lock_fhandle(int _Filehandle)
    ADD ESP,0x4                         ; 10005b84
    PUSH ESI                            ; 10005b87
    CALL __close_lk                     ; 10005b88
        ;   XREF to: 10005bc0 (UNCONDITIONAL_CALL)  ; undefined __close_lk()
    ADD ESP,0x4                         ; 10005b8d
    MOV EDI,EAX                         ; 10005b90
    PUSH ESI                            ; 10005b92
    CALL __unlock_fhandle               ; 10005b93
        ;   XREF to: 10008e50 (UNCONDITIONAL_CALL)  ; void __unlock_fhandle(int _Filehandle)
    ADD ESP,0x4                         ; 10005b98
    MOV EAX,EDI                         ; 10005b9b
    POP EDI                             ; 10005b9d
    POP ESI                             ; 10005b9e
    RET                                 ; 10005b9f
    CALL FUN_10008a20                   ; 10005ba0
        ;   XREF to: 10008a20 (UNCONDITIONAL_CALL)  ; undefined FUN_10008a20()
        ;   Label: LAB_10005ba0
    MOV dword ptr [EAX],0x9             ; 10005ba5
    CALL FUN_10008a30                   ; 10005bab
        ;   XREF to: 10008a30 (UNCONDITIONAL_CALL)  ; undefined FUN_10008a30()
    POP EDI                             ; 10005bb0
    MOV dword ptr [EAX],0x0             ; 10005bb1
    MOV EAX,0xffffffff                  ; 10005bb7
    POP ESI                             ; 10005bbc
    RET                                 ; 10005bbd

