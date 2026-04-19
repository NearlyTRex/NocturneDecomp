; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_ckptutil_c_rasterizeEdgeEndpoints_FUN_004336e0(void *bitmap_buffer,SEdge *edge_list,int edge_count,int buffer_width,int buffer_height)
;
; Parameters:
; void *           Stack[0x4]:4   bitmap_buffer
; SEdge *          Stack[0x8]:4   edge_list
; int              Stack[0xc]:4   edge_count
; int              Stack[0x10]:4   buffer_width
; int              Stack[0x14]:4   buffer_height
; Local Variables:
; char[256]        Stack[-0x114]:256  local_114
;
; Referenced Globals:
;   TerminatedCString s_Edge_out_of_range_edge_d_00617dbc
;   TerminatedCString s_cockpit_ckptutil_c_00617dd7
;   TerminatedCString s_Edge_out_of_range_edge_d_00617ded
;   TerminatedCString s_cockpit_ckptutil_c_00617e08
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   crt_stdio.c_sprintf_FUN_005fdbd0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004336e0
        ;   Label: cockpit_ckptutil.c_rasterizeEdgeEndpoints_FUN_004336e0
    PUSH ESI                            ; 004336e1
    PUSH EDI                            ; 004336e2
    PUSH EBP                            ; 004336e3
    SUB ESP,0x104                       ; 004336e4
    CMP dword ptr [ESP + 0x118],0x0     ; 004336ea
    JZ 0x0043380d                       ; 004336f2
        ;   XREF to: 0043380d (CONDITIONAL_JUMP)  ; LAB_0043380d
    MOV ECX,0xfb                        ; 004336f8
    MOV EBX,dword ptr [ESP + 0x120]     ; 004336fd
    XOR EDI,EDI                         ; 00433704
    MOV dword ptr [ESP + 0x100],ECX     ; 00433706
    TEST EBX,EBX                        ; 0043370d
    JLE 0x0043380d                      ; 0043370f
        ;   XREF to: 0043380d (CONDITIONAL_JUMP)  ; LAB_0043380d
    MOV EBP,dword ptr [ESP + 0x124]     ; 00433715
    IMUL EBP,dword ptr [ESP + 0x128]    ; 0043371c
    MOV ESI,dword ptr [ESP + 0x11c]     ; 00433724
    DEC EBP                             ; 0043372b
    MOV AX,word ptr [ESI + 0x2]         ; 0043372c
        ;   Label: LAB_0043372c
    MOV EBX,dword ptr [ESP + 0x124]     ; 00433730
    MOVSX EDX,AX                        ; 00433737
    IMUL EDX,EBX                        ; 0043373a
    MOV AX,word ptr [ESI]               ; 0043373d
    MOVSX EBX,AX                        ; 00433740
    ADD EBX,EDX                         ; 00433743
    TEST EBX,EBX                        ; 00433745
    JL 0x0043374d                       ; 00433747
        ;   XREF to: 0043374d (CONDITIONAL_JUMP)  ; LAB_0043374d
    CMP EBX,EBP                         ; 00433749
    JLE 0x00433780                      ; 0043374b
        ;   XREF to: 00433780 (CONDITIONAL_JUMP)  ; LAB_00433780
    PUSH EDI                            ; 0043374d
        ;   Label: LAB_0043374d
    PUSH 0x617dbc                       ; 0043374e | = "Edge out of range: edge %d"
    LEA EAX,[ESP + 0x8]                 ; 00433753
    PUSH EAX                            ; 00433757
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 00433758
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    MOV EAX,0x617dd7                    ; 0043375d | = "..\\cockpit\\ckptutil.c"
    ADD ESP,0xc                         ; 00433762
    MOV [0x02f0ca48],EAX                ; 00433765 | g_CurrentFilename
    MOV EAX,ESP                         ; 0043376a
    MOV EDX,0x553                       ; 0043376c
    PUSH EAX                            ; 00433771
    MOV dword ptr [0x02f0ca4c],EDX      ; 00433772 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00433778
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 0043377d
    ADD EBX,dword ptr [ESP + 0x118]     ; 00433780
        ;   Label: LAB_00433780
    MOV AL,byte ptr [ESP + 0x100]       ; 00433787
    MOV byte ptr [EBX],AL               ; 0043378e
    MOV AX,word ptr [ESI + 0x6]         ; 00433790
    ADD EAX,EAX                         ; 00433794
    SAR AX,0x1                          ; 00433796
    MOV EDX,dword ptr [ESP + 0x124]     ; 00433799
    CWDE                                ; 004337a0
    IMUL EDX,EAX                        ; 004337a1
    MOV AX,word ptr [ESI + 0x4]         ; 004337a4
    MOVSX EBX,AX                        ; 004337a8
    ADD EBX,EDX                         ; 004337ab
    TEST EBX,EBX                        ; 004337ad
    JL 0x004337b5                       ; 004337af
        ;   XREF to: 004337b5 (CONDITIONAL_JUMP)  ; LAB_004337b5
    CMP EBX,EBP                         ; 004337b1
    JLE 0x004337e8                      ; 004337b3
        ;   XREF to: 004337e8 (CONDITIONAL_JUMP)  ; LAB_004337e8
    PUSH EDI                            ; 004337b5
        ;   Label: LAB_004337b5
    PUSH 0x617ded                       ; 004337b6 | = "Edge out of range: edge %d"
    LEA EAX,[ESP + 0x8]                 ; 004337bb
    PUSH EAX                            ; 004337bf
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 004337c0
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    MOV EAX,0x617e08                    ; 004337c5 | = "..\\cockpit\\ckptutil.c"
    ADD ESP,0xc                         ; 004337ca
    MOV [0x02f0ca48],EAX                ; 004337cd | g_CurrentFilename
    MOV EAX,ESP                         ; 004337d2
    MOV EDX,0x55c                       ; 004337d4
    PUSH EAX                            ; 004337d9
    MOV dword ptr [0x02f0ca4c],EDX      ; 004337da | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 004337e0
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 004337e5
    MOV EAX,dword ptr [ESP + 0x118]     ; 004337e8
        ;   Label: LAB_004337e8
    MOV EDX,dword ptr [ESP + 0x120]     ; 004337ef
    ADD ESI,0x8                         ; 004337f6
    ADD EBX,EAX                         ; 004337f9
    MOV AL,byte ptr [ESP + 0x100]       ; 004337fb
    INC EDI                             ; 00433802
    MOV byte ptr [EBX],AL               ; 00433803
    CMP EDI,EDX                         ; 00433805
    JL 0x0043372c                       ; 00433807
        ;   XREF to: 0043372c (CONDITIONAL_JUMP)  ; LAB_0043372c
    ADD ESP,0x104                       ; 0043380d
        ;   Label: LAB_0043380d
    POP EBP                             ; 00433813
    POP EDI                             ; 00433814
    POP ESI                             ; 00433815
    POP EBX                             ; 00433816
    RET                                 ; 00433817

