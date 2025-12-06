; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl undefined crt_time.c_gmtime_r_FUN_00607690(time_t days, time_t seconds, time_t timezone_offset, undefined1 result)
;
; Parameters:
; typedef time_t long Stack[0x4]:4   days
; typedef time_t long Stack[0x8]:4   seconds
; typedef time_t long Stack[0xc]:4   timezone_offset
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   crt_time.c_localtime_r_FUN_00600230 at 0060024f
;   crt_time.c_mktime_FUN_00600f80 at 00601093
;
; Referenced Globals:
;   short g_DaysInMonth_Normal = 0x0
;   short g_DaysInMonth_Leap = 0x0
;
; Called Functions:
;   crt_time.c_is_leap_year_FUN_00607820
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00607690
        ;   Label: crt_time.c_gmtime_r_FUN_00607690
    PUSH ESI                            ; 00607691
    PUSH EDI                            ; 00607692
    PUSH EBP                            ; 00607693
    SUB ESP,0x4                         ; 00607694
    MOV EBP,dword ptr [ESP + 0x18]      ; 00607697
    MOV EBX,dword ptr [ESP + 0x1c]      ; 0060769b
    MOV EAX,dword ptr [ESP + 0x20]      ; 0060769f
    MOV EDI,dword ptr [ESP + 0x24]      ; 006076a3
    CMP EBX,0xa8c0                      ; 006076a7
    JNC 0x006076cb                      ; 006076ad | LAB_006076cb
        ;   XREF to: 006076cb (CONDITIONAL_JUMP)
    TEST EAX,EAX                        ; 006076af
    JLE 0x006076cb                      ; 006076b1 | LAB_006076cb
        ;   XREF to: 006076cb (CONDITIONAL_JUMP)
    ADD EBX,0x15180                     ; 006076b3
    MOV ESI,0x15180                     ; 006076b9
    SUB EBX,EAX                         ; 006076be
    XOR EDX,EDX                         ; 006076c0
    MOV EAX,EBX                         ; 006076c2
    DIV ESI                             ; 006076c4
    ADD EBP,EAX                         ; 006076c6
    DEC EBP                             ; 006076c8
    JMP 0x006076da                      ; 006076c9 | LAB_006076da
        ;   XREF to: 006076da (UNCONDITIONAL_JUMP)
    MOV ESI,0x15180                     ; 006076cb
        ;   Label: LAB_006076cb
    SUB EBX,EAX                         ; 006076d0
    XOR EDX,EDX                         ; 006076d2
    MOV EAX,EBX                         ; 006076d4
    DIV ESI                             ; 006076d6
    ADD EBP,EAX                         ; 006076d8
    MOV ESI,0x15180                     ; 006076da
        ;   Label: LAB_006076da
    MOV EAX,EBX                         ; 006076df
    XOR EDX,EDX                         ; 006076e1
    DIV ESI                             ; 006076e3
    MOV EBX,EDX                         ; 006076e5
    MOV ESI,0xe10                       ; 006076e7
    MOV EAX,EBX                         ; 006076ec
    XOR EDX,EDX                         ; 006076ee
    DIV ESI                             ; 006076f0
    XOR EDX,EDX                         ; 006076f2
    MOV dword ptr [EDI + 0x8],EAX       ; 006076f4
    MOV EAX,EBX                         ; 006076f7
    DIV ESI                             ; 006076f9
    MOV EBX,EDX                         ; 006076fb
    MOV ESI,0x3c                        ; 006076fd
    MOV EAX,EBX                         ; 00607702
    XOR EDX,EDX                         ; 00607704
    DIV ESI                             ; 00607706
    XOR EDX,EDX                         ; 00607708
    MOV dword ptr [EDI + 0x4],EAX       ; 0060770a
    MOV EAX,EBX                         ; 0060770d
    DIV ESI                             ; 0060770f
    MOV EBX,0x16e                       ; 00607711
    MOV EAX,EBP                         ; 00607716
    MOV dword ptr [EDI],EDX             ; 00607718
    XOR EDX,EDX                         ; 0060771a
    DIV EBX                             ; 0060771c
    MOV ESI,EAX                         ; 0060771e
    SHL EAX,0x3                         ; 00607720
    ADD EAX,ESI                         ; 00607723
    SHL EAX,0x3                         ; 00607725
    ADD EAX,ESI                         ; 00607728
    MOV EBX,EAX                         ; 0060772a
    SHL EAX,0x2                         ; 0060772c
    ADD EAX,EBX                         ; 0060772f
    MOV EBX,EBP                         ; 00607731
    SUB EBX,EAX                         ; 00607733
    TEST ESI,ESI                        ; 00607735
    JBE 0x00607741                      ; 00607737 | LAB_00607741
        ;   XREF to: 00607741 (CONDITIONAL_JUMP)
    LEA EAX,[ESI + -0x1]                ; 00607739
    SHR EAX,0x2                         ; 0060773c
    SUB EBX,EAX                         ; 0060773f
    LEA EAX,[ESI + 0x76c]               ; 00607741
        ;   Label: LAB_00607741
    PUSH EAX                            ; 00607747
    CALL crt_time.c_is_leap_year_FUN_00607820 ; 00607748 | int crt_time.c_is_leap_year_FUN_00607820(int year)
        ;   XREF to: 00607820 (UNCONDITIONAL_CALL)
    ADD EAX,0x16d                       ; 0060774d
    ADD ESP,0x4                         ; 00607752
    CMP EBX,EAX                         ; 00607755
    JC 0x00607760                       ; 00607757 | LAB_00607760
        ;   XREF to: 00607760 (CONDITIONAL_JUMP)
    SUB EBX,EAX                         ; 00607759
        ;   Label: LAB_00607759
    INC ESI                             ; 0060775b
    CMP EBX,EAX                         ; 0060775c
    JNC 0x00607759                      ; 0060775e | LAB_00607759
        ;   XREF to: 00607759 (CONDITIONAL_JUMP)
    MOV dword ptr [EDI + 0x14],ESI      ; 00607760
        ;   Label: LAB_00607760
    ADD ESI,0x76c                       ; 00607763
    MOV EDX,0x665f38                    ; 00607769 | short g_DaysInMonth_Normal
    PUSH ESI                            ; 0060776e
    MOV dword ptr [EDI + 0x1c],EBX      ; 0060776f
    MOV dword ptr [ESP + 0x4],EDX       ; 00607772 | short g_DaysInMonth_Normal
    CALL crt_time.c_is_leap_year_FUN_00607820 ; 00607776 | int crt_time.c_is_leap_year_FUN_00607820(int year)
        ;   XREF to: 00607820 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0060777b
    TEST EAX,EAX                        ; 0060777e
    JZ 0x00607789                       ; 00607780 | LAB_00607789
        ;   XREF to: 00607789 (CONDITIONAL_JUMP)
    MOV dword ptr [ESP],0x665f52        ; 00607782 | short g_DaysInMonth_Leap
    MOV ESI,0x1f                        ; 00607789
        ;   Label: LAB_00607789
    MOV EAX,EBX                         ; 0060778e
    XOR EDX,EDX                         ; 00607790
    DIV ESI                             ; 00607792
    MOV EDX,dword ptr [ESP]             ; 00607794
    LEA ESI,[EAX*0x2 + 0x0]             ; 00607797
    ADD ESI,EDX                         ; 0060779e
    MOV ESI,dword ptr [ESI]             ; 006077a0 | short g_DaysInMonth_Normal | g_DaysInMonth_Leap = 0x0
    SAR ESI,0x10                        ; 006077a2
    CMP EBX,ESI                         ; 006077a5
    JC 0x006077aa                       ; 006077a7 | LAB_006077aa
        ;   XREF to: 006077aa (CONDITIONAL_JUMP)
    INC EAX                             ; 006077a9
    MOV ECX,dword ptr [ESP]             ; 006077aa
        ;   Label: LAB_006077aa
    MOV dword ptr [EDI + 0x10],EAX      ; 006077ad
    ADD EAX,EAX                         ; 006077b0
    ADD EAX,ECX                         ; 006077b2
    MOVSX EAX,word ptr [EAX]            ; 006077b4 | short g_DaysInMonth_Normal | g_DaysInMonth_Leap = 0x0
    SUB EBX,EAX                         ; 006077b7
    XOR EDX,EDX                         ; 006077b9
    INC EBX                             ; 006077bb
    LEA EAX,[EBP + 0x1]                 ; 006077bc
    MOV dword ptr [EDI + 0xc],EBX       ; 006077bf
    MOV EBX,0x7                         ; 006077c2
    DIV EBX                             ; 006077c7
    MOV EAX,EDI                         ; 006077c9
    MOV dword ptr [EDI + 0x18],EDX      ; 006077cb
    ADD ESP,0x4                         ; 006077ce
    POP EBP                             ; 006077d1
    POP EDI                             ; 006077d2
    POP ESI                             ; 006077d3
    POP EBX                             ; 006077d4
    RET                                 ; 006077d5

