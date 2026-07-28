; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; _FILE * __cdecl crt_unknown_c_fopenWithFlags_FUN_00565630(char *filename,char *mode,int flags)
;
; Parameters:
; char *           Stack[0x4]:4   filename
; char *           Stack[0x8]:4   mode
; int              Stack[0xc]:4   flags
; Local Variables:
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[1]:
;   crt_stdio.c_fopen_FUN_0056568c at 00565699
;
; Called Functions:
;   crt_stdio.c___allocfp_FUN_00568560
;   crt_unknown.c_OpenFileAndInitialize_FUN_0056551c
;   crt_unknown.c_OpenModeStringParser_FUN_005653e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00565630
        ;   Label: crt_unknown.c_fopenWithFlags_FUN_00565630
    PUSH ESI                            ; 00565631
    PUSH EDI                            ; 00565632
    SUB ESP,0x4                         ; 00565633
    MOV EAX,ESP                         ; 00565636
    PUSH EAX                            ; 00565638
    MOV EDX,dword ptr [ESP + 0x1c]      ; 00565639
    PUSH EDX                            ; 0056563d
    CALL crt_unknown.c_OpenModeStringParser_FUN_005653e0 ; 0056563e
        ;   XREF to: 005653e0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_OpenModeStringParser_FUN_005653e0()
    MOV EBX,EAX                         ; 00565643
    ADD ESP,0x8                         ; 00565645
    TEST EAX,EAX                        ; 00565648
    JZ 0x00565682                       ; 0056564a
        ;   XREF to: 00565682 (CONDITIONAL_JUMP)  ; LAB_00565682
    PUSH 0x0                            ; 0056564c
    CALL crt_stdio.c___allocfp_FUN_00568560 ; 0056564e
        ;   XREF to: 00568560 (UNCONDITIONAL_CALL)  ; _FILE * crt_stdio.c___allocfp_FUN_00568560(int unused_param)
    ADD ESP,0x4                         ; 00565653
    MOV EDX,EAX                         ; 00565656
    TEST EAX,EAX                        ; 00565658
    JZ 0x00565680                       ; 0056565a
        ;   XREF to: 00565680 (CONDITIONAL_JUMP)  ; LAB_00565680
    PUSH EAX                            ; 0056565c
    MOV ECX,dword ptr [ESP + 0x20]      ; 0056565d
    PUSH ECX                            ; 00565661
    MOV ESI,dword ptr [ESP + 0x8]       ; 00565662
    PUSH ESI                            ; 00565666
    MOV EDX,dword ptr [ESP + 0x24]      ; 00565667
    XOR EAX,EAX                         ; 0056566b
    PUSH EBX                            ; 0056566d
    MOV AL,byte ptr [EDX]               ; 0056566e
    PUSH EAX                            ; 00565670
    MOV EDI,dword ptr [ESP + 0x28]      ; 00565671
    PUSH EDI                            ; 00565675
    CALL crt_unknown.c_OpenFileAndInitialize_FUN_0056551c ; 00565676
        ;   XREF to: 0056551c (UNCONDITIONAL_CALL)  ; _FILE * crt_unknown.c_OpenFileAndInitialize_FUN_0056551c(char * filename, char mode_char, int parsed_mode_flags, int stage1_result, ...)
    ADD ESP,0x18                        ; 0056567b
    MOV EDX,EAX                         ; 0056567e
    MOV EAX,EDX                         ; 00565680
        ;   Label: LAB_00565680
    ADD ESP,0x4                         ; 00565682
        ;   Label: LAB_00565682
    POP EDI                             ; 00565685
    POP ESI                             ; 00565686
    POP EBX                             ; 00565687
    RET                                 ; 00565688

