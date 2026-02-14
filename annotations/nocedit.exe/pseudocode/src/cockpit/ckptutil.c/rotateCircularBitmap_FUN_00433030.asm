; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl cockpit_ckptutil_c_rotateCircularBitmap_FUN_00433030(void *bitmap_data,int width,int height,int num_iterations)
;
; Parameters:
; void *           Stack[0x4]:4   bitmap_data
; int              Stack[0x8]:4   width
; int              Stack[0xc]:4   height
; int              Stack[0x10]:4   num_iterations
; Local Variables:
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00433030
        ;   Label: cockpit_ckptutil.c_rotateCircularBitmap_FUN_00433030
    PUSH ESI                            ; 00433031
    PUSH EDI                            ; 00433032
    PUSH EBP                            ; 00433033
    SUB ESP,0x18                        ; 00433034
    MOV EDX,dword ptr [ESP + 0x30]      ; 00433037
    MOV EBX,dword ptr [ESP + 0x38]      ; 0043303b
    MOV EAX,EDX                         ; 0043303f
    IMUL EAX,EBX                        ; 00433041
    MOV dword ptr [ESP + 0x8],EAX       ; 00433044
    MOV EAX,EDX                         ; 00433048
    SAR EDX,0x1f                        ; 0043304a
    SUB EAX,EDX                         ; 0043304d
    SAR EAX,0x1                         ; 0043304f
    MOV dword ptr [ESP + 0x10],EAX      ; 00433051
    CMP EBX,0x1                         ; 00433055
    JNZ 0x004330b4                      ; 00433058
        ;   XREF to: 004330b4 (CONDITIONAL_JUMP)  ; LAB_004330b4
    MOV ESI,dword ptr [ESP + 0x34]      ; 0043305a
    XOR EDI,EDI                         ; 0043305e
    TEST ESI,ESI                        ; 00433060
    JBE 0x004330ac                      ; 00433062
        ;   XREF to: 004330ac (CONDITIONAL_JUMP)  ; LAB_004330ac
    MOV EAX,dword ptr [ESP + 0x8]       ; 00433064
    MOV dword ptr [ESP + 0x4],EAX       ; 00433068
    IMUL ESI,EAX,0x0                    ; 0043306c
    MOV EDX,dword ptr [ESP + 0x2c]      ; 0043306f
        ;   Label: LAB_0043306f
    MOV EBP,dword ptr [ESP + 0x8]       ; 00433073
    ADD EDX,ESI                         ; 00433077
    MOV ECX,dword ptr [ESP + 0x10]      ; 00433079
    ADD EBP,EDX                         ; 0043307d
    XOR EAX,EAX                         ; 0043307f
    SUB EBP,EBX                         ; 00433081
    TEST ECX,ECX                        ; 00433083
    JBE 0x0043309d                      ; 00433085
        ;   XREF to: 0043309d (CONDITIONAL_JUMP)  ; LAB_0043309d
    MOV CL,byte ptr [EDX]               ; 00433087
        ;   Label: LAB_00433087
    INC EDX                             ; 00433089
    MOV CH,byte ptr [EBP]               ; 0043308a
    MOV byte ptr [EDX + -0x1],CH        ; 0043308d
    INC EAX                             ; 00433090
    MOV byte ptr [EBP],CL               ; 00433091
    MOV ECX,dword ptr [ESP + 0x10]      ; 00433094
    DEC EBP                             ; 00433098
    CMP EAX,ECX                         ; 00433099
    JC 0x00433087                       ; 0043309b
        ;   XREF to: 00433087 (CONDITIONAL_JUMP)  ; LAB_00433087
    MOV EBP,dword ptr [ESP + 0x4]       ; 0043309d
        ;   Label: LAB_0043309d
    MOV EAX,dword ptr [ESP + 0x34]      ; 004330a1
    INC EDI                             ; 004330a5
    ADD ESI,EBP                         ; 004330a6
    CMP EDI,EAX                         ; 004330a8
    JC 0x0043306f                       ; 004330aa
        ;   XREF to: 0043306f (CONDITIONAL_JUMP)  ; LAB_0043306f
    ADD ESP,0x18                        ; 004330ac
        ;   Label: LAB_004330ac
    POP EBP                             ; 004330af
    POP EDI                             ; 004330b0
    POP ESI                             ; 004330b1
    POP EBX                             ; 004330b2
    RET                                 ; 004330b3
    XOR EDX,EDX                         ; 004330b4
        ;   Label: LAB_004330b4
    MOV ECX,dword ptr [ESP + 0x34]      ; 004330b6
    MOV dword ptr [ESP + 0xc],EDX       ; 004330ba
    TEST ECX,ECX                        ; 004330be
    JBE 0x004330ac                      ; 004330c0
        ;   XREF to: 004330ac (CONDITIONAL_JUMP)  ; LAB_004330ac
    MOV EDX,dword ptr [ESP + 0xc]       ; 004330c2
        ;   Label: LAB_004330c2
    MOV EAX,dword ptr [ESP + 0x8]       ; 004330c6
    IMUL EDX,EAX                        ; 004330ca
    MOV ECX,dword ptr [ESP + 0x2c]      ; 004330cd
    MOV EDI,dword ptr [ESP + 0x10]      ; 004330d1
    ADD EDX,ECX                         ; 004330d5
    XOR ESI,ESI                         ; 004330d7
    LEA EBP,[EAX + EDX*0x1]             ; 004330d9
    MOV dword ptr [ESP + 0x14],ESI      ; 004330dc
    SUB EBP,EBX                         ; 004330e0
    TEST EDI,EDI                        ; 004330e2
    JBE 0x0043313d                      ; 004330e4
        ;   XREF to: 0043313d (CONDITIONAL_JUMP)  ; LAB_0043313d
    MOV EDI,ESP                         ; 004330e6
        ;   Label: LAB_004330e6
    MOV ECX,EBX                         ; 004330e8
    MOV ESI,EDX                         ; 004330ea
    PUSH EDI                            ; 004330ec
    MOV EAX,ECX                         ; 004330ed
    SHR ECX,0x2                         ; 004330ef
    MOVSD.REP ES:EDI,ESI                ; 004330f2
    MOV CL,AL                           ; 004330f4
    AND CL,0x3                          ; 004330f6
    MOVSB.REP ES:EDI,ESI                ; 004330f9
    POP EDI                             ; 004330fb
    MOV ECX,EBX                         ; 004330fc
    MOV ESI,EBP                         ; 004330fe
    MOV EDI,EDX                         ; 00433100
    PUSH EDI                            ; 00433102
    MOV EAX,ECX                         ; 00433103
    SHR ECX,0x2                         ; 00433105
    MOVSD.REP ES:EDI,ESI                ; 00433108
    MOV CL,AL                           ; 0043310a
    AND CL,0x3                          ; 0043310c
    MOVSB.REP ES:EDI,ESI                ; 0043310f
    POP EDI                             ; 00433111
    MOV ESI,ESP                         ; 00433112
    MOV ECX,EBX                         ; 00433114
    MOV EDI,EBP                         ; 00433116
    PUSH EDI                            ; 00433118
    MOV EAX,ECX                         ; 00433119
    SHR ECX,0x2                         ; 0043311b
    MOVSD.REP ES:EDI,ESI                ; 0043311e
    MOV CL,AL                           ; 00433120
    AND CL,0x3                          ; 00433122
    MOVSB.REP ES:EDI,ESI                ; 00433125
    POP EDI                             ; 00433127
    ADD EDX,EBX                         ; 00433128
    MOV EAX,dword ptr [ESP + 0x14]      ; 0043312a
    MOV ECX,dword ptr [ESP + 0x10]      ; 0043312e
    INC EAX                             ; 00433132
    SUB EBP,EBX                         ; 00433133
    MOV dword ptr [ESP + 0x14],EAX      ; 00433135
    CMP EAX,ECX                         ; 00433139
    JC 0x004330e6                       ; 0043313b
        ;   XREF to: 004330e6 (CONDITIONAL_JUMP)  ; LAB_004330e6
    MOV EDI,dword ptr [ESP + 0xc]       ; 0043313d
        ;   Label: LAB_0043313d
    INC EDI                             ; 00433141
    MOV EBP,dword ptr [ESP + 0x34]      ; 00433142
    MOV dword ptr [ESP + 0xc],EDI       ; 00433146
    CMP EDI,EBP                         ; 0043314a
    JNC 0x004330ac                      ; 0043314c
        ;   XREF to: 004330ac (CONDITIONAL_JUMP)  ; LAB_004330ac
    JMP 0x004330c2                      ; 00433152
        ;   XREF to: 004330c2 (UNCONDITIONAL_JUMP)  ; LAB_004330c2

