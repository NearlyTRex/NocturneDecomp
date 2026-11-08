; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00420570(undefined4 *param_1,uint param_2)
;
; Local Variables:
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined4       Stack[-0x10]:4  local_10
; undefined4       Stack[-0xc]:4  local_c
;
; XREF[11]:
;   FUN_00408ec0 at 00408f29
;   FUN_00420990 at 004209bd
;   FUN_00421670 at 0042169c
;   FUN_0054f0d0 at 0054f4f2
;   FUN_005562c0 at 005566bb
;   FUN_005580d0 at 0055810b
;   FUN_00559f80 at 0055a0b2
;   FUN_0056ae70 at 0056af41
;   FUN_00583700 at 005837e9
;   FUN_005a28c0 at 005a2a61
;   ... and 1 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00420570
        ;   Label: FUN_00420570
    PUSH EDI                            ; 00420571
    SUB ESP,0x18                        ; 00420572
    MOV EDX,dword ptr [ESP + 0x24]      ; 00420575
    MOV ECX,dword ptr [ESP + 0x28]      ; 00420579
    MOV EAX,ESI                         ; 0042057d
    TEST CL,0x1                         ; 0042057f
    JNZ 0x004205c6                      ; 00420582
        ;   XREF to: 004205c6 (CONDITIONAL_JUMP)  ; LAB_004205c6
    MOV EBX,dword ptr [EDX]             ; 00420584
    MOV dword ptr [ESP + 0xc],EBX       ; 00420586
        ;   Label: LAB_00420586
    MOV EBX,dword ptr [ESP + 0xc]       ; 0042058a
    MOV dword ptr [ESP],EBX             ; 0042058e
    TEST CL,0x2                         ; 00420591
    JZ 0x004205cb                       ; 00420594
        ;   XREF to: 004205cb (CONDITIONAL_JUMP)  ; LAB_004205cb
    MOV EBX,dword ptr [EDX + 0x10]      ; 00420596
    MOV dword ptr [ESP + 0x10],EBX      ; 00420599
        ;   Label: LAB_00420599
    MOV EBX,dword ptr [ESP + 0x10]      ; 0042059d
    MOV dword ptr [ESP + 0x4],EBX       ; 004205a1
    TEST CL,0x4                         ; 004205a5
    JZ 0x004205d0                       ; 004205a8
        ;   XREF to: 004205d0 (CONDITIONAL_JUMP)  ; LAB_004205d0
    MOV EDX,dword ptr [EDX + 0x14]      ; 004205aa
    MOV dword ptr [ESP + 0x14],EDX      ; 004205ad
        ;   Label: LAB_004205ad
    MOV EDX,dword ptr [ESP + 0x14]      ; 004205b1
    MOV ESI,ESP                         ; 004205b5
    MOV EDI,EAX                         ; 004205b7
    MOV dword ptr [ESP + 0x8],EDX       ; 004205b9
    MOVSD ES:EDI,ESI                    ; 004205bd
    MOVSD ES:EDI,ESI                    ; 004205be
    MOVSD ES:EDI,ESI                    ; 004205bf
    ADD ESP,0x18                        ; 004205c0
    POP EDI                             ; 004205c3
    POP EBX                             ; 004205c4
    RET                                 ; 004205c5
    MOV EBX,dword ptr [EDX + 0xc]       ; 004205c6
        ;   Label: LAB_004205c6
    JMP 0x00420586                      ; 004205c9
        ;   XREF to: 00420586 (UNCONDITIONAL_JUMP)  ; LAB_00420586
    MOV EBX,dword ptr [EDX + 0x4]       ; 004205cb
        ;   Label: LAB_004205cb
    JMP 0x00420599                      ; 004205ce
        ;   XREF to: 00420599 (UNCONDITIONAL_JUMP)  ; LAB_00420599
    MOV EDX,dword ptr [EDX + 0x8]       ; 004205d0
        ;   Label: LAB_004205d0
    JMP 0x004205ad                      ; 004205d3
        ;   XREF to: 004205ad (UNCONDITIONAL_JUMP)  ; LAB_004205ad

