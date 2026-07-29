; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_ckptutil_c_copyScreenRegion_FUN_0042e750(void *dest_buffer,int src_x,int src_y,int start_row,int bytes_per_row,int height)
;
; Parameters:
; void *           Stack[0x4]:4   dest_buffer
; int              Stack[0x8]:4   src_x
; int              Stack[0xc]:4   src_y
; int              Stack[0x10]:4   start_row
; int              Stack[0x14]:4   bytes_per_row
; int              Stack[0x18]:4   height
; Local Variables:
; undefined4       Stack[-0x10]:4  local_10
;
; Referenced Globals:
;   undefined4 DAT_005b761c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0042e750
        ;   Label: cockpit_ckptutil.c_copyScreenRegion_FUN_0042e750
    PUSH ESI                            ; 0042e751
    PUSH EBP                            ; 0042e752
    SUB ESP,0x4                         ; 0042e753
    MOV ECX,dword ptr [ESP + 0x20]      ; 0042e756
    MOV EBP,dword ptr [ESP + 0x24]      ; 0042e75a
    MOV ESI,dword ptr [ESP + 0x28]      ; 0042e75e
    MOV EBX,dword ptr [ESP + 0x14]      ; 0042e762
    TEST ESI,ESI                        ; 0042e766
    JLE 0x0042e7a8                      ; 0042e768
        ;   XREF to: 0042e7a8 (CONDITIONAL_JUMP)  ; LAB_0042e7a8
    PUSH EDI                            ; 0042e76a
    MOV EDX,ECX                         ; 0042e76b
    ADD ECX,ESI                         ; 0042e76d
    MOV dword ptr [ESP + 0x4],ECX       ; 0042e76f
    MOV ESI,dword ptr [0x005b761c]      ; 0042e773 | DAT_005b761c
        ;   Label: LAB_0042e773
    IMUL ESI,EDX                        ; 0042e779
    MOV ECX,dword ptr [ESP + 0x20]      ; 0042e77c
    MOV EDI,dword ptr [ESP + 0x1c]      ; 0042e780
    ADD ESI,ECX                         ; 0042e784
    MOV ECX,EBP                         ; 0042e786
    ADD ESI,EDI                         ; 0042e788
    MOV EDI,EBX                         ; 0042e78a
    INC EDX                             ; 0042e78c
    PUSH EDI                            ; 0042e78d
    MOV EAX,ECX                         ; 0042e78e
    SHR ECX,0x2                         ; 0042e790
    MOVSD.REP ES:EDI,ESI                ; 0042e793
    MOV CL,AL                           ; 0042e795
    AND CL,0x3                          ; 0042e797
    MOVSB.REP ES:EDI,ESI                ; 0042e79a
    POP EDI                             ; 0042e79c
    MOV EAX,dword ptr [ESP + 0x4]       ; 0042e79d
    ADD EBX,EBP                         ; 0042e7a1
    CMP EDX,EAX                         ; 0042e7a3
    JL 0x0042e773                       ; 0042e7a5
        ;   XREF to: 0042e773 (CONDITIONAL_JUMP)  ; LAB_0042e773
    POP EDI                             ; 0042e7a7
    ADD ESP,0x4                         ; 0042e7a8
        ;   Label: LAB_0042e7a8
    POP EBP                             ; 0042e7ab
    POP ESI                             ; 0042e7ac
    POP EBX                             ; 0042e7ad
    RET                                 ; 0042e7ae

