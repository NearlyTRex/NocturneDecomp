; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_ckptutil_c_generateTransparencySpans_FUN_00435730(void *bitmap_buffer,char *filename,SScanlineSpans *span_output,int width,int height,int transparent_color_index)
;
; Parameters:
; void *           Stack[0x4]:4   bitmap_buffer
; char *           Stack[0x8]:4   filename
; SScanlineSpans * Stack[0xc]:4   span_output
; int              Stack[0x10]:4   width
; int              Stack[0x14]:4   height
; int              Stack[0x18]:4   transparent_color_index
; Local Variables:
; char[256]        Stack[-0x130]:256  local_130
; int              Stack[-0x30]:4  local_30
; int              Stack[-0x2c]:4  local_2c
; int              Stack[-0x28]:4  local_28
; byte *           Stack[-0x24]:4  local_24
; int              Stack[-0x20]:4  local_20
; int *            Stack[-0x1c]:4  local_1c
; int              Stack[-0x18]:4  local_18
; int              Stack[-0x14]:4  local_14
;
; XREF[1]:
;   cockpit_ckptutil.c_loadBitmapWithPalette_FUN_004317b0 at 00431802
;
; Referenced Globals:
;   TerminatedCString s_Invalid_transparent_colo_00618082
;   TerminatedCString s_cockpit_ckptutil_c_006180a6
;   TerminatedCString s_Too_many_spans_bitmap_s__006180bc
;   TerminatedCString s_cockpit_ckptutil_c_006180ed
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   crt_stdio.c_sprintf_FUN_005fdbd0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00435730
        ;   Label: cockpit_ckptutil.c_generateTransparencySpans_FUN_00435730
    PUSH ESI                            ; 00435731
    PUSH EDI                            ; 00435732
    PUSH EBP                            ; 00435733
    SUB ESP,0x120                       ; 00435734
    MOV EDX,dword ptr [ESP + 0x148]     ; 0043573a
    CMP EDX,0xff                        ; 00435741
    JA 0x00435929                       ; 00435747
        ;   XREF to: 00435929 (CONDITIONAL_JUMP)  ; LAB_00435929
    XOR EDI,EDI                         ; 0043574d
        ;   Label: LAB_0043574d
    MOV EBP,dword ptr [ESP + 0x144]     ; 0043574f
    MOV dword ptr [ESP + 0x110],EDI     ; 00435756
    TEST EBP,EBP                        ; 0043575d
    JLE 0x0043591e                      ; 0043575f
        ;   XREF to: 0043591e (CONDITIONAL_JUMP)  ; LAB_0043591e
    MOV EAX,dword ptr [ESP + 0x140]     ; 00435765
    DEC EAX                             ; 0043576c
    MOV dword ptr [ESP + 0x100],EAX     ; 0043576d
    MOV EAX,dword ptr [ESP + 0x140]     ; 00435774
    MOV dword ptr [ESP + 0x104],EAX     ; 0043577b
    IMUL EAX,EDI                        ; 00435782
    MOV EDX,dword ptr [ESP + 0x134]     ; 00435785
    ADD EAX,EDX                         ; 0043578c
    MOV dword ptr [ESP + 0x10c],EAX     ; 0043578e
    MOV EAX,dword ptr [ESP + 0x13c]     ; 00435795
    MOV dword ptr [ESP + 0x108],EDI     ; 0043579c
    MOV dword ptr [ESP + 0x114],EAX     ; 004357a3
    MOV ESI,dword ptr [ESP + 0x140]     ; 004357aa
        ;   Label: LAB_004357aa
    XOR EBX,EBX                         ; 004357b1
    XOR EAX,EAX                         ; 004357b3
    MOV dword ptr [ESP + 0x11c],EBX     ; 004357b5
    TEST ESI,ESI                        ; 004357bc
    JLE 0x0043582b                      ; 004357be
        ;   XREF to: 0043582b (CONDITIONAL_JUMP)  ; LAB_0043582b
    MOV EDX,dword ptr [ESP + 0x108]     ; 004357c0
    MOV ESI,0xffffffff                  ; 004357c7
    XOR EDI,EDI                         ; 004357cc
    MOV dword ptr [ESP + 0x118],EDX     ; 004357ce
    MOV EDX,dword ptr [ESP + 0x10c]     ; 004357d5
    MOV ECX,dword ptr [ESP + 0x13c]     ; 004357dc
        ;   Label: LAB_004357dc
    ADD ECX,dword ptr [ESP + 0x118]     ; 004357e3
    ADD ECX,EDI                         ; 004357ea
    TEST EBX,EBX                        ; 004357ec
    JZ 0x00435962                       ; 004357ee
        ;   XREF to: 00435962 (CONDITIONAL_JUMP)  ; LAB_00435962
    MOVZX EBP,byte ptr [EDX]            ; 004357f4
    CMP EBP,dword ptr [ESP + 0x148]     ; 004357f7
    JNZ 0x0043581d                      ; 004357fe
        ;   XREF to: 0043581d (CONDITIONAL_JUMP)  ; LAB_0043581d
    MOV EBP,ESI                         ; 00435800
    SUB EBP,dword ptr [ECX + 0x4]       ; 00435802
    INC EBP                             ; 00435805
    MOV dword ptr [ECX + 0x44],EBP      ; 00435806
    MOV ECX,dword ptr [ESP + 0x11c]     ; 00435809
    ADD EDI,0x4                         ; 00435810
    INC ECX                             ; 00435813
    XOR EBX,EBX                         ; 00435814
    MOV dword ptr [ESP + 0x11c],ECX     ; 00435816
    MOV EBP,dword ptr [ESP + 0x140]     ; 0043581d
        ;   Label: LAB_0043581d
    INC EDX                             ; 00435824
    INC EAX                             ; 00435825
    INC ESI                             ; 00435826
    CMP EAX,EBP                         ; 00435827
    JL 0x004357dc                       ; 00435829
        ;   XREF to: 004357dc (CONDITIONAL_JUMP)  ; LAB_004357dc
    MOV EAX,dword ptr [ESP + 0x11c]     ; 0043582b
        ;   Label: LAB_0043582b
    CMP EAX,0x10                        ; 00435832
    JL 0x0043587b                       ; 00435835
        ;   XREF to: 0043587b (CONDITIONAL_JUMP)  ; LAB_0043587b
    MOV EDX,dword ptr [ESP + 0x110]     ; 00435837
    PUSH EDX                            ; 0043583e
    PUSH EAX                            ; 0043583f
    MOV ESI,dword ptr [ESP + 0x140]     ; 00435840
    PUSH ESI                            ; 00435847
    PUSH 0x6180bc                       ; 00435848 | = "Too many spans: bitmap %s, spans %d, ..."
    LEA EAX,[ESP + 0x10]                ; 0043584d
    PUSH EAX                            ; 00435851
    MOV EDI,0x6180ed                    ; 00435852 | = "..\\cockpit\\ckptutil.c"
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 00435857
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x14                        ; 0043585c
    MOV EAX,ESP                         ; 0043585f
    MOV EBP,0x972                       ; 00435861
    PUSH EAX                            ; 00435866
    MOV dword ptr [0x02f0ca48],EDI      ; 00435867 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EBP      ; 0043586d | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00435873
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 00435878
    CMP EBX,0x1                         ; 0043587b
        ;   Label: LAB_0043587b
    JNZ 0x004358b1                      ; 0043587e
        ;   XREF to: 004358b1 (CONDITIONAL_JUMP)  ; LAB_004358b1
    MOV EAX,dword ptr [ESP + 0x11c]     ; 00435880
    MOV EDX,dword ptr [ESP + 0x114]     ; 00435887
    SHL EAX,0x2                         ; 0043588e
    ADD EAX,EDX                         ; 00435891
    MOV EDX,dword ptr [ESP + 0x100]     ; 00435893
    SUB EDX,dword ptr [EAX + 0x4]       ; 0043589a
    ADD EDX,EBX                         ; 0043589d
    MOV EBX,dword ptr [ESP + 0x11c]     ; 0043589f
    INC EBX                             ; 004358a6
    MOV dword ptr [EAX + 0x44],EDX      ; 004358a7
    MOV dword ptr [ESP + 0x11c],EBX     ; 004358aa
    MOV EAX,dword ptr [ESP + 0x11c]     ; 004358b1
        ;   Label: LAB_004358b1
    MOV EDX,dword ptr [ESP + 0x114]     ; 004358b8
    MOV ECX,dword ptr [ESP + 0x114]     ; 004358bf
    MOV EBX,dword ptr [ESP + 0x108]     ; 004358c6
    MOV ESI,dword ptr [ESP + 0x110]     ; 004358cd
    MOV EDI,dword ptr [ESP + 0x144]     ; 004358d4
    ADD ECX,0x84                        ; 004358db
    ADD EBX,0x84                        ; 004358e1
    INC ESI                             ; 004358e7
    MOV dword ptr [EDX],EAX             ; 004358e8
    MOV EAX,dword ptr [ESP + 0x104]     ; 004358ea
    MOV EDX,dword ptr [ESP + 0x10c]     ; 004358f1
    MOV dword ptr [ESP + 0x114],ECX     ; 004358f8
    MOV dword ptr [ESP + 0x108],EBX     ; 004358ff
    ADD EDX,EAX                         ; 00435906
    MOV dword ptr [ESP + 0x110],ESI     ; 00435908
    MOV dword ptr [ESP + 0x10c],EDX     ; 0043590f
    CMP ESI,EDI                         ; 00435916
    JL 0x004357aa                       ; 00435918
        ;   XREF to: 004357aa (CONDITIONAL_JUMP)  ; LAB_004357aa
    ADD ESP,0x120                       ; 0043591e
        ;   Label: LAB_0043591e
    POP EBP                             ; 00435924
    POP EDI                             ; 00435925
    POP ESI                             ; 00435926
    POP EBX                             ; 00435927
    RET                                 ; 00435928
    PUSH EDX                            ; 00435929
        ;   Label: LAB_00435929
    PUSH 0x618082                       ; 0043592a | = "Invalid transparent color index: %d"
    LEA EAX,[ESP + 0x8]                 ; 0043592f
    PUSH EAX                            ; 00435933
    MOV EBX,0x6180a6                    ; 00435934 | = "..\\cockpit\\ckptutil.c"
    CALL crt_stdio.c_sprintf_FUN_005fdbd0 ; 00435939
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c_sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0xc                         ; 0043593e
    MOV EAX,ESP                         ; 00435941
    MOV ESI,0x942                       ; 00435943
    PUSH EAX                            ; 00435948
    MOV dword ptr [0x02f0ca48],EBX      ; 00435949 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ESI      ; 0043594f | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00435955
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 0043595a
    JMP 0x0043574d                      ; 0043595d
        ;   XREF to: 0043574d (UNCONDITIONAL_JUMP)  ; LAB_0043574d
    MOVZX EBP,byte ptr [EDX]            ; 00435962
        ;   Label: LAB_00435962
    CMP EBP,dword ptr [ESP + 0x148]     ; 00435965
    JZ 0x0043581d                       ; 0043596c
        ;   XREF to: 0043581d (CONDITIONAL_JUMP)  ; LAB_0043581d
    MOV EBX,0x1                         ; 00435972
    MOV dword ptr [ECX + 0x4],EAX       ; 00435977
    JMP 0x0043581d                      ; 0043597a
        ;   XREF to: 0043581d (UNCONDITIONAL_JUMP)  ; LAB_0043581d

