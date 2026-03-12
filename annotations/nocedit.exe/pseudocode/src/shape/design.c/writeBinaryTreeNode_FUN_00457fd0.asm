; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl shape_design_c_writeBinaryTreeNode_FUN_00457fd0(STreeNode *node,_FILE *file,int depth)
;
; Parameters:
; STreeNode *      Stack[0x4]:4   node
; _FILE *          Stack[0x8]:4   file
; int              Stack[0xc]:4   depth
;
; XREF[1]:
;   shape_design.c_exportModelToMDL_FUN_00459e80 at 0045a1d9
;
; Referenced Globals:
;   TerminatedCString s_d_d_d_0061a882
;   TerminatedCString s_d_d_f_f_f_f_0061a88c
;
; Called Functions:
;   crt_stdio.c_fprintf_FUN_005fe6d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00457fd0
        ;   Label: shape_design.c_writeBinaryTreeNode_FUN_00457fd0
    PUSH ESI                            ; 00457fd1
    PUSH EDI                            ; 00457fd2
    PUSH EBP                            ; 00457fd3
    MOV EBP,ESP                         ; 00457fd4
    SUB ESP,0x0                         ; 00457fd6
    CMP dword ptr [EBP + 0x14],0x0      ; 00457fdc
    JZ 0x0045808f                       ; 00457fe0
        ;   XREF to: 0045808f (CONDITIONAL_JUMP)  ; LAB_0045808f
    MOV EAX,dword ptr [EBP + 0x14]      ; 00457fe6
    CMP dword ptr [EAX + 0x8],0x0       ; 00457fe9
    JNZ 0x00458013                      ; 00457fed
        ;   XREF to: 00458013 (CONDITIONAL_JUMP)  ; LAB_00458013
    MOV EAX,dword ptr [EBP + 0x14]      ; 00457fef
    PUSH dword ptr [EAX + 0xc]          ; 00457ff2
    MOV EAX,dword ptr [EBP + 0x14]      ; 00457ff5
    PUSH dword ptr [EAX + 0x8]          ; 00457ff8
    MOV EAX,dword ptr [EBP + 0x1c]      ; 00457ffb
    PUSH EAX                            ; 00457ffe
    MOV EAX,0x61a882                    ; 00457fff | = "%d,%d,%d\n"
    PUSH EAX                            ; 00458004 | = "%d,%d,%d\n"
    MOV EAX,dword ptr [EBP + 0x18]      ; 00458005
    PUSH EAX                            ; 00458008
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 00458009
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0x14                        ; 0045800e
    JMP 0x0045808f                      ; 00458011
        ;   XREF to: 0045808f (UNCONDITIONAL_JUMP)  ; LAB_0045808f
    MOV EAX,dword ptr [EBP + 0x14]      ; 00458013
        ;   Label: LAB_00458013
    FLD float ptr [EAX + 0x18]          ; 00458016
    SUB ESP,0x8                         ; 00458019
    FSTP double ptr [ESP]               ; 0045801c
    MOV EAX,dword ptr [EBP + 0x14]      ; 0045801f
    FLD float ptr [EAX + 0x14]          ; 00458022
    SUB ESP,0x8                         ; 00458025
    FSTP double ptr [ESP]               ; 00458028
    MOV EAX,dword ptr [EBP + 0x14]      ; 0045802b
    FLD float ptr [EAX + 0x10]          ; 0045802e
    SUB ESP,0x8                         ; 00458031
    FSTP double ptr [ESP]               ; 00458034
    MOV EAX,dword ptr [EBP + 0x14]      ; 00458037
    FLD float ptr [EAX + 0xc]           ; 0045803a
    SUB ESP,0x8                         ; 0045803d
    FSTP double ptr [ESP]               ; 00458040
    MOV EAX,dword ptr [EBP + 0x14]      ; 00458043
    PUSH dword ptr [EAX + 0x8]          ; 00458046
    MOV EAX,dword ptr [EBP + 0x1c]      ; 00458049
    PUSH EAX                            ; 0045804c
    MOV EAX,0x61a88c                    ; 0045804d | = "%d,%d,%f,%f,%f,%f\n"
    PUSH EAX                            ; 00458052 | = "%d,%d,%f,%f,%f,%f\n"
    MOV EAX,dword ptr [EBP + 0x18]      ; 00458053
    PUSH EAX                            ; 00458056
    CALL crt_stdio.c_fprintf_FUN_005fe6d0 ; 00458057
        ;   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_fprintf_FUN_005fe6d0(_FILE * file, char * format)
    ADD ESP,0x30                        ; 0045805c
    MOV EAX,dword ptr [EBP + 0x1c]      ; 0045805f
    ADD EAX,EAX                         ; 00458062
    PUSH EAX                            ; 00458064
    MOV EAX,dword ptr [EBP + 0x18]      ; 00458065
    PUSH EAX                            ; 00458068
    MOV EAX,dword ptr [EBP + 0x14]      ; 00458069
    PUSH dword ptr [EAX]                ; 0045806c
    CALL shape_design.c_writeBinaryTreeNode_FUN_00457fd0 ; 0045806e
        ;   XREF to: 00457fd0 (UNCONDITIONAL_CALL)  ; void shape_design.c_writeBinaryTreeNode_FUN_00457fd0(STreeNode * node, _FILE * file, int depth)
    ADD ESP,0xc                         ; 00458073
    MOV EAX,dword ptr [EBP + 0x1c]      ; 00458076
    ADD EAX,EAX                         ; 00458079
    INC EAX                             ; 0045807b
    PUSH EAX                            ; 0045807c
    MOV EAX,dword ptr [EBP + 0x18]      ; 0045807d
    PUSH EAX                            ; 00458080
    MOV EAX,dword ptr [EBP + 0x14]      ; 00458081
    PUSH dword ptr [EAX + 0x4]          ; 00458084
    CALL shape_design.c_writeBinaryTreeNode_FUN_00457fd0 ; 00458087
        ;   XREF to: 00457fd0 (UNCONDITIONAL_CALL)  ; void shape_design.c_writeBinaryTreeNode_FUN_00457fd0(STreeNode * node, _FILE * file, int depth)
    ADD ESP,0xc                         ; 0045808c
    POP EBP                             ; 0045808f
        ;   Label: LAB_0045808f
    POP EDI                             ; 00458090
    POP ESI                             ; 00458091
    POP EBX                             ; 00458092
    RET                                 ; 00458093

