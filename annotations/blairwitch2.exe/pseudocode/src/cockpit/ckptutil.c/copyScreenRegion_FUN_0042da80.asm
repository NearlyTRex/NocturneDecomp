; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_ckptutil_c_copyScreenRegion_FUN_0042da80(void *dest_buffer,int src_x,int src_y,int start_row,int bytes_per_row,int height)
;
; Parameters:
; void *           Stack[0x4]:4   dest_buffer
; int              Stack[0x8]:4   src_x
; int              Stack[0xc]:4   src_y
; int              Stack[0x10]:4   start_row
; int              Stack[0x14]:4   bytes_per_row
; int              Stack[0x18]:4   height
;
; Referenced Globals:
;   undefined4 DAT_006141b8
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0042da80
        ;   Label: cockpit_ckptutil.c_copyScreenRegion_FUN_0042da80
    PUSH ESI                            ; 0042da81
    PUSH EBP                            ; 0042da82
    SUB ESP,0x4                         ; 0042da83
    MOV ECX,dword ptr [ESP + 0x20]      ; 0042da86
    MOV EBP,dword ptr [ESP + 0x24]      ; 0042da8a
    MOV ESI,dword ptr [ESP + 0x28]      ; 0042da8e
    MOV EBX,dword ptr [ESP + 0x14]      ; 0042da92
    TEST ESI,ESI                        ; 0042da96
    JLE 0x0042dad8                      ; 0042da98
        ;   XREF to: 0042dad8 (CONDITIONAL_JUMP)  ; LAB_0042dad8
    PUSH EDI                            ; 0042da9a
    MOV EDX,ECX                         ; 0042da9b
    ADD ECX,ESI                         ; 0042da9d
    MOV dword ptr [ESP + 0x4],ECX       ; 0042da9f
    MOV ESI,dword ptr [0x006141b8]      ; 0042daa3 | DAT_006141b8
        ;   Label: LAB_0042daa3
    IMUL ESI,EDX                        ; 0042daa9
    MOV ECX,dword ptr [ESP + 0x20]      ; 0042daac
    MOV EDI,dword ptr [ESP + 0x1c]      ; 0042dab0
    ADD ESI,ECX                         ; 0042dab4
    MOV ECX,EBP                         ; 0042dab6
    ADD ESI,EDI                         ; 0042dab8
    MOV EDI,EBX                         ; 0042daba
    INC EDX                             ; 0042dabc
    PUSH EDI                            ; 0042dabd
    MOV EAX,ECX                         ; 0042dabe
    SHR ECX,0x2                         ; 0042dac0
    MOVSD.REP ES:EDI,ESI                ; 0042dac3
    MOV CL,AL                           ; 0042dac5
    AND CL,0x3                          ; 0042dac7
    MOVSB.REP ES:EDI,ESI                ; 0042daca
    POP EDI                             ; 0042dacc
    MOV EAX,dword ptr [ESP + 0x4]       ; 0042dacd
    ADD EBX,EBP                         ; 0042dad1
    CMP EDX,EAX                         ; 0042dad3
    JL 0x0042daa3                       ; 0042dad5
        ;   XREF to: 0042daa3 (CONDITIONAL_JUMP)  ; LAB_0042daa3
    POP EDI                             ; 0042dad7
    ADD ESP,0x4                         ; 0042dad8
        ;   Label: LAB_0042dad8
    POP EBP                             ; 0042dadb
    POP ESI                             ; 0042dadc
    POP EBX                             ; 0042dadd
    RET                                 ; 0042dade

