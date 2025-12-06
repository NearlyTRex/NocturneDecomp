; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void cockpit_ckptutil.c_copyScreenRegion_FUN_00432d90(void * dest_buffer, int src_x, int src_y, int start_row, int bytes_per_row, int height)
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
;   int g_WindowWidth = 0x140
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00432d90
        ;   Label: cockpit_ckptutil.c_copyScreenRegion_FUN_00432d90
    PUSH ESI                            ; 00432d91
    PUSH EBP                            ; 00432d92
    SUB ESP,0x4                         ; 00432d93
    MOV ECX,dword ptr [ESP + 0x20]      ; 00432d96
    MOV EBP,dword ptr [ESP + 0x24]      ; 00432d9a
    MOV ESI,dword ptr [ESP + 0x28]      ; 00432d9e
    MOV EBX,dword ptr [ESP + 0x14]      ; 00432da2
    TEST ESI,ESI                        ; 00432da6
    JLE 0x00432de8                      ; 00432da8 | LAB_00432de8
        ;   XREF to: 00432de8 (CONDITIONAL_JUMP)
    PUSH EDI                            ; 00432daa
    MOV EDX,ECX                         ; 00432dab
    ADD ECX,ESI                         ; 00432dad
    MOV dword ptr [ESP + 0x4],ECX       ; 00432daf
    MOV ESI,dword ptr [0x00679394]      ; 00432db3 | int g_WindowWidth
        ;   Label: LAB_00432db3
    IMUL ESI,EDX                        ; 00432db9
    MOV ECX,dword ptr [ESP + 0x20]      ; 00432dbc
    MOV EDI,dword ptr [ESP + 0x1c]      ; 00432dc0
    ADD ESI,ECX                         ; 00432dc4
    MOV ECX,EBP                         ; 00432dc6
    ADD ESI,EDI                         ; 00432dc8
    MOV EDI,EBX                         ; 00432dca
    INC EDX                             ; 00432dcc
    PUSH EDI                            ; 00432dcd
    MOV EAX,ECX                         ; 00432dce
    SHR ECX,0x2                         ; 00432dd0
    MOVSD.REP ES:EDI,ESI                ; 00432dd3
    MOV CL,AL                           ; 00432dd5
    AND CL,0x3                          ; 00432dd7
    MOVSB.REP ES:EDI,ESI                ; 00432dda
    POP EDI                             ; 00432ddc
    MOV EAX,dword ptr [ESP + 0x4]       ; 00432ddd
    ADD EBX,EBP                         ; 00432de1
    CMP EDX,EAX                         ; 00432de3
    JL 0x00432db3                       ; 00432de5 | LAB_00432db3
        ;   XREF to: 00432db3 (CONDITIONAL_JUMP)
    POP EDI                             ; 00432de7
    ADD ESP,0x4                         ; 00432de8
        ;   Label: LAB_00432de8
    POP EBP                             ; 00432deb
    POP ESI                             ; 00432dec
    POP EBX                             ; 00432ded
    RET                                 ; 00432dee

