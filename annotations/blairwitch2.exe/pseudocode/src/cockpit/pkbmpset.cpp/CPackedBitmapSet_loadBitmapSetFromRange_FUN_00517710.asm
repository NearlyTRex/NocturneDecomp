; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_pkbmpset_cpp_CPackedBitmapSet_loadBitmapSetFromRange_FUN_00517710(CPackedBitmapSet *this_ptr,char *param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8)
;
; Parameters:
; CPackedBitmapSet * Stack[0x4]:4   this_ptr
; char *           Stack[0x8]:4   param_2
; int              Stack[0xc]:4   param_3
; int              Stack[0x10]:4   param_4
; int              Stack[0x14]:4   param_5
; int              Stack[0x18]:4   param_6
; int              Stack[0x1c]:4   param_7
; int              Stack[0x20]:4   param_8
;
; Called Functions:
;   cockpit_pkbitmap.cpp_FUN_005168e0
;   cockpit_pkbitmap.cpp_FUN_005175b0
;   cockpit_pkbitmap.cpp_FUN_00517640
;   cockpit_pkbmpset.cpp_FUN_00517670
;   crt_unknown.c_sprintf_FUN_005b7790
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00517710
        ;   Label: cockpit_pkbmpset.cpp_CPackedBitmapSet_loadBitmapSetFromRange_FUN_00517710
    PUSH ESI                            ; 00517711
    PUSH EDI                            ; 00517712
    PUSH EBP                            ; 00517713
    SUB ESP,0x64                        ; 00517714
    MOV EDI,dword ptr [ESP + 0x78]      ; 00517717
    MOV ESI,dword ptr [ESP + 0x88]      ; 0051771b
    MOV EBP,dword ptr [ESP + 0x8c]      ; 00517722
    PUSH EDI                            ; 00517729
    CALL cockpit_pkbitmap.cpp_FUN_00517640 ; 0051772a
        ;   XREF to: 00517640 (UNCONDITIONAL_CALL)  ; undefined cockpit_pkbitmap.cpp_FUN_00517640()
    ADD ESP,0x4                         ; 0051772f
    PUSH EDI                            ; 00517732
    CALL cockpit_pkbitmap.cpp_FUN_005175b0 ; 00517733
        ;   XREF to: 005175b0 (UNCONDITIONAL_CALL)  ; undefined cockpit_pkbitmap.cpp_FUN_005175b0()
    MOV EAX,EBP                         ; 00517738
    SUB EAX,ESI                         ; 0051773a
    ADD ESP,0x4                         ; 0051773c
    INC EAX                             ; 0051773f
    PUSH EAX                            ; 00517740
    PUSH EDI                            ; 00517741
    CALL cockpit_pkbmpset.cpp_FUN_00517670 ; 00517742
        ;   XREF to: 00517670 (UNCONDITIONAL_CALL)  ; undefined cockpit_pkbmpset.cpp_FUN_00517670()
    ADD ESP,0x8                         ; 00517747
    MOV EAX,dword ptr [ESP + 0x84]      ; 0051774a
    MOV dword ptr [EDI + 0x20],EAX      ; 00517751
    MOV EAX,dword ptr [ESP + 0x80]      ; 00517754
    MOV EBX,ESI                         ; 0051775b
    MOV dword ptr [EDI + 0x1c],EAX      ; 0051775d
    CMP ESI,EBP                         ; 00517760
    JG 0x005177d0                       ; 00517762
        ;   XREF to: 005177d0 (CONDITIONAL_JUMP)  ; LAB_005177d0
    LEA EAX,[ESI*0x8 + 0x0]             ; 00517764
    ADD EAX,ESI                         ; 0051776b
    SHL EAX,0x2                         ; 0051776d
    MOV ESI,EAX                         ; 00517770
    NEG ESI                             ; 00517772
    ADD ESI,EAX                         ; 00517774
    PUSH EBX                            ; 00517776
        ;   Label: LAB_00517776
    MOV EDX,dword ptr [ESP + 0x80]      ; 00517777
    PUSH EDX                            ; 0051777e
    LEA EAX,[ESP + 0x8]                 ; 0051777f
    PUSH EAX                            ; 00517783
    CALL crt_unknown.c_sprintf_FUN_005b7790 ; 00517784
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005b7790(char * buffer, char * format)
    ADD ESP,0xc                         ; 00517789
    MOV ECX,dword ptr [ESP + 0x94]      ; 0051778c
    PUSH ECX                            ; 00517793
    MOV EAX,dword ptr [ESP + 0x94]      ; 00517794
    PUSH EAX                            ; 0051779b
    MOV EDX,dword ptr [ESP + 0x8c]      ; 0051779c
    PUSH EDX                            ; 005177a3
    MOV ECX,dword ptr [ESP + 0x8c]      ; 005177a4
    PUSH ECX                            ; 005177ab
    LEA EAX,[ESP + 0x10]                ; 005177ac
    PUSH EAX                            ; 005177b0
    MOV EAX,dword ptr [EDI + 0x4]       ; 005177b1
    ADD EAX,ESI                         ; 005177b4
    PUSH EAX                            ; 005177b6
    INC EBX                             ; 005177b7
    CALL cockpit_pkbitmap.cpp_FUN_005168e0 ; 005177b8
        ;   XREF to: 005168e0 (UNCONDITIONAL_CALL)  ; void cockpit_pkbitmap.cpp_FUN_005168e0(CPackedBitmap * this_ptr, char * filename, int width, int height, ...)
    ADD ESI,0x24                        ; 005177bd
    ADD ESP,0x18                        ; 005177c0
    CMP EBX,EBP                         ; 005177c3
    JLE 0x00517776                      ; 005177c5
        ;   XREF to: 00517776 (CONDITIONAL_JUMP)  ; LAB_00517776
    LEA EAX,[EAX]                       ; 005177c7
    LEA EDX,[EDX]                       ; 005177cd
    ADD ESP,0x64                        ; 005177d0
        ;   Label: LAB_005177d0
    POP EBP                             ; 005177d3
    POP EDI                             ; 005177d4
    POP ESI                             ; 005177d5
    POP EBX                             ; 005177d6
    RET                                 ; 005177d7

