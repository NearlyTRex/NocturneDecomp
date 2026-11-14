; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_2d_c_setupViewportAndClipping_FUN_00401810(int left,int top,int right,int bottom)
;
; Parameters:
; int              Stack[0x4]:4   left
; int              Stack[0x8]:4   top
; int              Stack[0xc]:4   right
; int              Stack[0x10]:4   bottom
;
; XREF[3]:
;   engine_matrix.c_pushViewport_FUN_005090b0 at 005091cc
;   shape_edittool.cpp_CEditorTools_createModalWindow_FUN_00496920 at 00496d7e
;   wincore_wddvmem.cpp_FUN_005ac300 at 005ac6e6
;
; Referenced Globals:
;   undefined4 DAT_01c4eff8
;   undefined4 DAT_01c4effc
;   undefined4 DAT_01c4f000
;   undefined4 DAT_01c4f004
;   undefined4 DAT_01c4f008
;   undefined4 DAT_01c4f00c
;   undefined4 DAT_01c4f010
;   undefined4 DAT_01c4f014
;   undefined4 DAT_01c4f018
;   undefined4 DAT_01c4f01c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00401810
        ;   Label: engine_2d.c_setupViewportAndClipping_FUN_00401810
    PUSH ESI                            ; 00401811
    PUSH EDI                            ; 00401812
    MOV EDI,dword ptr [ESP + 0x10]      ; 00401813
    MOV EBX,dword ptr [ESP + 0x18]      ; 00401817
    MOV ECX,dword ptr [ESP + 0x1c]      ; 0040181b
    MOV EAX,dword ptr [ESP + 0x14]      ; 0040181f
    MOV dword ptr [0x01c4f010],EBX      ; 00401823 | DAT_01c4f010
    MOV dword ptr [0x01c4f014],ECX      ; 00401829 | DAT_01c4f014
    SUB EBX,EDI                         ; 0040182f
    MOV [0x01c4f00c],EAX                ; 00401831 | DAT_01c4f00c
    INC EBX                             ; 00401836
    SUB ECX,EAX                         ; 00401837
    MOV EDX,EBX                         ; 00401839
    MOV EAX,EBX                         ; 0040183b
    SAR EDX,0x1f                        ; 0040183d
    SUB EAX,EDX                         ; 00401840
    SAR EAX,0x1                         ; 00401842
    INC ECX                             ; 00401844
    AND EAX,0xffff                      ; 00401845
    MOV EDX,ECX                         ; 0040184a
    LEA ESI,[EAX + -0x1]                ; 0040184c
    SAR EDX,0x1f                        ; 0040184f
    MOV EAX,ECX                         ; 00401852
    SUB EAX,EDX                         ; 00401854
    SAR EAX,0x1                         ; 00401856
    MOV dword ptr [0x01c4f008],EDI      ; 00401858 | DAT_01c4f008
    MOV dword ptr [0x01c4f018],EBX      ; 0040185e | DAT_01c4f018
    MOV dword ptr [0x01c4f01c],ECX      ; 00401864 | DAT_01c4f01c
    AND EAX,0xffff                      ; 0040186a
    MOV EDX,ESI                         ; 0040186f
    ADD ESI,EDI                         ; 00401871
    DEC EAX                             ; 00401873
    INC ESI                             ; 00401874
    SHL EDX,0x10                        ; 00401875
    SHL ESI,0x10                        ; 00401878
    MOV dword ptr [0x01c4eff8],EDX      ; 0040187b | DAT_01c4eff8
    MOV dword ptr [0x01c4f000],ESI      ; 00401881 | DAT_01c4f000
    MOV ESI,dword ptr [ESP + 0x14]      ; 00401887
    MOV EDX,EAX                         ; 0040188b
    ADD EAX,ESI                         ; 0040188d
    NEG EDX                             ; 0040188f
    INC EAX                             ; 00401891
    SHL EDX,0x10                        ; 00401892
    SHL EAX,0x10                        ; 00401895
    MOV dword ptr [0x01c4effc],EDX      ; 00401898 | DAT_01c4effc
    MOV [0x01c4f004],EAX                ; 0040189e | DAT_01c4f004
    POP EDI                             ; 004018a3
    POP ESI                             ; 004018a4
    POP EBX                             ; 004018a5
    RET                                 ; 004018a6

