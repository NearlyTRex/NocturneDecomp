; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00414910(int param_1)
;
;
; Called Functions:
;   FUN_0044fd20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00414910
        ;   Label: FUN_00414910
    PUSH EDI                            ; 00414911
    SUB ESP,0x18                        ; 00414912
    MOV EBX,ESI                         ; 00414915
    MOV EAX,dword ptr [ESP + 0x24]      ; 00414917
    ADD EAX,0x2b4                       ; 0041491b
    PUSH EAX                            ; 00414920
    LEA EDI,[ESP + 0x4]                 ; 00414921
    CALL FUN_0044fd20                   ; 00414925
        ;   XREF to: 0044fd20 (UNCONDITIONAL_CALL)  ; undefined FUN_0044fd20()
    MOV ECX,0x6                         ; 0041492a
    MOV ESI,dword ptr [EAX + 0x350]     ; 0041492f
    ADD ESP,0x4                         ; 00414935
    MOVSD.REP ES:EDI,ESI                ; 00414938
    MOV ECX,0x6                         ; 0041493a
    MOV ESI,ESP                         ; 0041493f
    MOV EDI,EBX                         ; 00414941
    MOVSD.REP ES:EDI,ESI                ; 00414943
    MOV EAX,EBX                         ; 00414945
    ADD ESP,0x18                        ; 00414947
    POP EDI                             ; 0041494a
    POP EBX                             ; 0041494b
    RET                                 ; 0041494c

