; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00491240(int param_1,int param_2)
;
; Local Variables:
; undefined4       Stack[-0x4]:4  local_4
;
; XREF[1]:
;   FUN_004b5190 at 004b5540
;
; *****************************************************************************

section .text

    SUB ESP,0x4                         ; 00491240
        ;   Label: FUN_00491240
    MOV EAX,dword ptr [ESP + 0xc]       ; 00491243
    CMP EAX,-0x1                        ; 00491247
    JNZ 0x0049125a                      ; 0049124a
        ;   XREF to: 0049125a (CONDITIONAL_JUMP)  ; LAB_0049125a
    MOV dword ptr [ESP],0xbf800000      ; 0049124c
    MOV EAX,dword ptr [ESP]             ; 00491253
    ADD ESP,0x4                         ; 00491256
    RET                                 ; 00491259
    MOV EDX,dword ptr [ESP + 0x8]       ; 0049125a
        ;   Label: LAB_0049125a
    SHL EAX,0x2                         ; 0049125e
    ADD EAX,EDX                         ; 00491261
    MOV EAX,dword ptr [EAX + 0x3354]    ; 00491263
    MOV dword ptr [ESP],EAX             ; 00491269
    MOV EAX,dword ptr [ESP]             ; 0049126c
    ADD ESP,0x4                         ; 0049126f
    RET                                 ; 00491272

