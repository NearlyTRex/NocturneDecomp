; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dtrace_cpp_CDemonRaytrace_addTriangle_FUN_00495100(CDemonRaytrace *this_ptr,CVector3f *vertex1,CVector3f *vertex2,CVector3f *vertex3,uchar triangle_flags)
;
; Parameters:
; CDemonRaytrace * Stack[0x4]:4   this_ptr
; CVector3f *      Stack[0x8]:4   vertex1
; CVector3f *      Stack[0xc]:4   vertex2
; CVector3f *      Stack[0x10]:4   vertex3
; uchar            Stack[0x14]:1   triangle_flags
;
; XREF[1]:
;   core_setedit.cpp_CDemonSet_importS3D_FUN_00578d80 at 0057934a
;
; Referenced Globals:
;   TerminatedCString s_core_dtrace_cpp_00622a9f
;   TerminatedCString s_CDemonRaytrace_addTriang_00622ab2
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_dtri.cpp_CDemonTriangle_buildCollision_FUN_0049a790
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00495100
        ;   Label: core_dtrace.cpp_CDemonRaytrace_addTriangle_FUN_00495100
    PUSH ESI                            ; 00495101
    PUSH EDI                            ; 00495102
    PUSH EBP                            ; 00495103
    MOV EBX,dword ptr [ESP + 0x14]      ; 00495104
    MOV EBP,dword ptr [ESP + 0x18]      ; 00495108
    MOV EDI,dword ptr [ESP + 0x1c]      ; 0049510c
    MOV ESI,dword ptr [ESP + 0x20]      ; 00495110
    MOV EAX,dword ptr [EBX + 0x4]       ; 00495114
    SHL EAX,0x3                         ; 00495117
    PUSH ESI                            ; 0049511a
    MOV EDX,EAX                         ; 0049511b
    SHL EAX,0x3                         ; 0049511d
    PUSH EDI                            ; 00495120
    SUB EAX,EDX                         ; 00495121
    MOV EDX,dword ptr [EBX + 0x8]       ; 00495123
    PUSH EBP                            ; 00495126
    ADD EAX,EDX                         ; 00495127
    PUSH EAX                            ; 00495129
    CALL core_dtri.cpp_CDemonTriangle_buildCollision_FUN_0049a790 ; 0049512a
        ;   XREF to: 0049a790 (UNCONDITIONAL_CALL)  ; void core_dtri.cpp_CDemonTriangle_buildCollision_FUN_0049a790(CDemonTriangle * this_ptr, CVector3f * vertex1, CVector3f * vertex2, CVector3f * vertex3)
    MOV EAX,dword ptr [EBX + 0xc]       ; 0049512f
    MOV EDX,dword ptr [EBX + 0x4]       ; 00495132
    ADD ESP,0x10                        ; 00495135
    ADD EAX,EDX                         ; 00495138
    MOV DL,byte ptr [ESP + 0x24]        ; 0049513a
    MOV byte ptr [EAX],DL               ; 0049513e
    MOV ECX,dword ptr [EBX + 0x4]       ; 00495140
    INC ECX                             ; 00495143
    MOV dword ptr [EBX + 0x4],ECX       ; 00495144
    CMP ECX,0x30d40                     ; 00495147
    JGE 0x0049527c                      ; 0049514d
        ;   XREF to: 0049527c (CONDITIONAL_JUMP)  ; LAB_0049527c
    FLD float ptr [EBP]                 ; 00495153
        ;   Label: LAB_00495153
    FCOMP float ptr [EBX + 0x10]        ; 00495156
    FNSTSW AX                           ; 00495159
    SAHF                                ; 0049515b
    JNC 0x00495164                      ; 0049515c
        ;   XREF to: 00495164 (CONDITIONAL_JUMP)  ; LAB_00495164
    MOV EAX,dword ptr [EBP]             ; 0049515e
    MOV dword ptr [EBX + 0x10],EAX      ; 00495161
    FLD float ptr [EDI]                 ; 00495164
        ;   Label: LAB_00495164
    FCOMP float ptr [EBX + 0x10]        ; 00495166
    FNSTSW AX                           ; 00495169
    SAHF                                ; 0049516b
    JNC 0x00495173                      ; 0049516c
        ;   XREF to: 00495173 (CONDITIONAL_JUMP)  ; LAB_00495173
    MOV EAX,dword ptr [EDI]             ; 0049516e
    MOV dword ptr [EBX + 0x10],EAX      ; 00495170
    FLD float ptr [ESI]                 ; 00495173
        ;   Label: LAB_00495173
    FCOMP float ptr [EBX + 0x10]        ; 00495175
    FNSTSW AX                           ; 00495178
    SAHF                                ; 0049517a
    JNC 0x00495182                      ; 0049517b
        ;   XREF to: 00495182 (CONDITIONAL_JUMP)  ; LAB_00495182
    MOV EAX,dword ptr [ESI]             ; 0049517d
    MOV dword ptr [EBX + 0x10],EAX      ; 0049517f
    FLD float ptr [EBP]                 ; 00495182
        ;   Label: LAB_00495182
    FCOMP float ptr [EBX + 0x1c]        ; 00495185
    FNSTSW AX                           ; 00495188
    SAHF                                ; 0049518a
    JBE 0x00495193                      ; 0049518b
        ;   XREF to: 00495193 (CONDITIONAL_JUMP)  ; LAB_00495193
    MOV EAX,dword ptr [EBP]             ; 0049518d
    MOV dword ptr [EBX + 0x1c],EAX      ; 00495190
    FLD float ptr [EDI]                 ; 00495193
        ;   Label: LAB_00495193
    FCOMP float ptr [EBX + 0x1c]        ; 00495195
    FNSTSW AX                           ; 00495198
    SAHF                                ; 0049519a
    JBE 0x004951a2                      ; 0049519b
        ;   XREF to: 004951a2 (CONDITIONAL_JUMP)  ; LAB_004951a2
    MOV EAX,dword ptr [EDI]             ; 0049519d
    MOV dword ptr [EBX + 0x1c],EAX      ; 0049519f
    FLD float ptr [ESI]                 ; 004951a2
        ;   Label: LAB_004951a2
    FCOMP float ptr [EBX + 0x1c]        ; 004951a4
    FNSTSW AX                           ; 004951a7
    SAHF                                ; 004951a9
    JBE 0x004951b1                      ; 004951aa
        ;   XREF to: 004951b1 (CONDITIONAL_JUMP)  ; LAB_004951b1
    MOV EAX,dword ptr [ESI]             ; 004951ac
    MOV dword ptr [EBX + 0x1c],EAX      ; 004951ae
    FLD float ptr [EBP + 0x4]           ; 004951b1
        ;   Label: LAB_004951b1
    FCOMP float ptr [EBX + 0x14]        ; 004951b4
    FNSTSW AX                           ; 004951b7
    SAHF                                ; 004951b9
    JNC 0x004951c2                      ; 004951ba
        ;   XREF to: 004951c2 (CONDITIONAL_JUMP)  ; LAB_004951c2
    MOV EAX,dword ptr [EBP + 0x4]       ; 004951bc
    MOV dword ptr [EBX + 0x14],EAX      ; 004951bf
    FLD float ptr [EDI + 0x4]           ; 004951c2
        ;   Label: LAB_004951c2
    FCOMP float ptr [EBX + 0x14]        ; 004951c5
    FNSTSW AX                           ; 004951c8
    SAHF                                ; 004951ca
    JNC 0x004951d3                      ; 004951cb
        ;   XREF to: 004951d3 (CONDITIONAL_JUMP)  ; LAB_004951d3
    MOV EAX,dword ptr [EDI + 0x4]       ; 004951cd
    MOV dword ptr [EBX + 0x14],EAX      ; 004951d0
    FLD float ptr [ESI + 0x4]           ; 004951d3
        ;   Label: LAB_004951d3
    FCOMP float ptr [EBX + 0x14]        ; 004951d6
    FNSTSW AX                           ; 004951d9
    SAHF                                ; 004951db
    JNC 0x004951e4                      ; 004951dc
        ;   XREF to: 004951e4 (CONDITIONAL_JUMP)  ; LAB_004951e4
    MOV EAX,dword ptr [ESI + 0x4]       ; 004951de
    MOV dword ptr [EBX + 0x14],EAX      ; 004951e1
    FLD float ptr [EBP + 0x4]           ; 004951e4
        ;   Label: LAB_004951e4
    FCOMP float ptr [EBX + 0x20]        ; 004951e7
    FNSTSW AX                           ; 004951ea
    SAHF                                ; 004951ec
    JBE 0x004951f5                      ; 004951ed
        ;   XREF to: 004951f5 (CONDITIONAL_JUMP)  ; LAB_004951f5
    MOV EAX,dword ptr [EBP + 0x4]       ; 004951ef
    MOV dword ptr [EBX + 0x20],EAX      ; 004951f2
    FLD float ptr [EDI + 0x4]           ; 004951f5
        ;   Label: LAB_004951f5
    FCOMP float ptr [EBX + 0x20]        ; 004951f8
    FNSTSW AX                           ; 004951fb
    SAHF                                ; 004951fd
    JBE 0x00495206                      ; 004951fe
        ;   XREF to: 00495206 (CONDITIONAL_JUMP)  ; LAB_00495206
    MOV EAX,dword ptr [EDI + 0x4]       ; 00495200
    MOV dword ptr [EBX + 0x20],EAX      ; 00495203
    FLD float ptr [ESI + 0x4]           ; 00495206
        ;   Label: LAB_00495206
    FCOMP float ptr [EBX + 0x20]        ; 00495209
    FNSTSW AX                           ; 0049520c
    SAHF                                ; 0049520e
    JBE 0x00495217                      ; 0049520f
        ;   XREF to: 00495217 (CONDITIONAL_JUMP)  ; LAB_00495217
    MOV EAX,dword ptr [ESI + 0x4]       ; 00495211
    MOV dword ptr [EBX + 0x20],EAX      ; 00495214
    FLD float ptr [EBP + 0x8]           ; 00495217
        ;   Label: LAB_00495217
    FCOMP float ptr [EBX + 0x18]        ; 0049521a
    FNSTSW AX                           ; 0049521d
    SAHF                                ; 0049521f
    JNC 0x00495228                      ; 00495220
        ;   XREF to: 00495228 (CONDITIONAL_JUMP)  ; LAB_00495228
    MOV EAX,dword ptr [EBP + 0x8]       ; 00495222
    MOV dword ptr [EBX + 0x18],EAX      ; 00495225
    FLD float ptr [EDI + 0x8]           ; 00495228
        ;   Label: LAB_00495228
    FCOMP float ptr [EBX + 0x18]        ; 0049522b
    FNSTSW AX                           ; 0049522e
    SAHF                                ; 00495230
    JNC 0x00495239                      ; 00495231
        ;   XREF to: 00495239 (CONDITIONAL_JUMP)  ; LAB_00495239
    MOV EAX,dword ptr [EDI + 0x8]       ; 00495233
    MOV dword ptr [EBX + 0x18],EAX      ; 00495236
    FLD float ptr [ESI + 0x8]           ; 00495239
        ;   Label: LAB_00495239
    FCOMP float ptr [EBX + 0x18]        ; 0049523c
    FNSTSW AX                           ; 0049523f
    SAHF                                ; 00495241
    JNC 0x0049524a                      ; 00495242
        ;   XREF to: 0049524a (CONDITIONAL_JUMP)  ; LAB_0049524a
    MOV EAX,dword ptr [ESI + 0x8]       ; 00495244
    MOV dword ptr [EBX + 0x18],EAX      ; 00495247
    FLD float ptr [EBP + 0x8]           ; 0049524a
        ;   Label: LAB_0049524a
    FCOMP float ptr [EBX + 0x24]        ; 0049524d
    FNSTSW AX                           ; 00495250
    SAHF                                ; 00495252
    JBE 0x0049525b                      ; 00495253
        ;   XREF to: 0049525b (CONDITIONAL_JUMP)  ; LAB_0049525b
    MOV EAX,dword ptr [EBP + 0x8]       ; 00495255
    MOV dword ptr [EBX + 0x24],EAX      ; 00495258
    FLD float ptr [EDI + 0x8]           ; 0049525b
        ;   Label: LAB_0049525b
    FCOMP float ptr [EBX + 0x24]        ; 0049525e
    FNSTSW AX                           ; 00495261
    SAHF                                ; 00495263
    JBE 0x0049526c                      ; 00495264
        ;   XREF to: 0049526c (CONDITIONAL_JUMP)  ; LAB_0049526c
    MOV EAX,dword ptr [EDI + 0x8]       ; 00495266
    MOV dword ptr [EBX + 0x24],EAX      ; 00495269
    FLD float ptr [ESI + 0x8]           ; 0049526c
        ;   Label: LAB_0049526c
    FCOMP float ptr [EBX + 0x24]        ; 0049526f
    FNSTSW AX                           ; 00495272
    SAHF                                ; 00495274
    JA 0x004952a4                       ; 00495275
        ;   XREF to: 004952a4 (CONDITIONAL_JUMP)  ; LAB_004952a4
    POP EBP                             ; 00495277
    POP EDI                             ; 00495278
    POP ESI                             ; 00495279
    POP EBX                             ; 0049527a
    RET                                 ; 0049527b
    MOV EDX,0x622a9f                    ; 0049527c | = "..\\core\\dtrace.cpp"
        ;   Label: LAB_0049527c
    MOV ECX,0x290                       ; 00495281
    PUSH 0x622ab2                       ; 00495286 | = "CDemonRaytrace::addTriangle - Too man..."
    MOV dword ptr [0x02f0ca48],EDX      ; 0049528b | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ECX      ; 00495291 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00495297
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 0049529c
    JMP 0x00495153                      ; 0049529f
        ;   XREF to: 00495153 (UNCONDITIONAL_JUMP)  ; LAB_00495153
    MOV EAX,dword ptr [ESI + 0x8]       ; 004952a4
        ;   Label: LAB_004952a4
    MOV dword ptr [EBX + 0x24],EAX      ; 004952a7
    POP EBP                             ; 004952aa
    POP EDI                             ; 004952ab
    POP ESI                             ; 004952ac
    POP EBX                             ; 004952ad
    RET                                 ; 004952ae

