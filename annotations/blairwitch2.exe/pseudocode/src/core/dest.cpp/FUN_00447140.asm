; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dest_cpp_FUN_00447140(CActorDestination *this_ptr,float delta_time)
;
; Parameters:
; CActorDestination * Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
;
; XREF[1]:
;   core_filmreel.cpp_FUN_00492d10 at 00492d43
;
; Referenced Globals:
;   undefined4 DAT_005cea5a
;   undefined4 DAT_005cea62
;   undefined4 DAT_006141f0
;   CDemonSet* g_CDemonSetPtr = 01e661b8
;
; Called Functions:
;   core_dest.cpp_FUN_004473f0
;   core_event.cpp_CEventList_executeCommands_FUN_004894f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00447140
        ;   Label: core_dest.cpp_FUN_00447140
    PUSH ESI                            ; 00447141
    PUSH EDI                            ; 00447142
    PUSH EBP                            ; 00447143
    MOV EBP,ESP                         ; 00447144
    SUB ESP,0x44                        ; 00447146
    AND ESP,0xfffffff8                  ; 00447149
    MOV EAX,dword ptr [EBP + 0x14]      ; 0044714c
    CMP dword ptr [EAX + 0x34c],0x0     ; 0044714f
    JZ 0x00447217                       ; 00447156
        ;   XREF to: 00447217 (CONDITIONAL_JUMP)  ; LAB_00447217
    MOV ECX,dword ptr [EAX + 0x2b4]     ; 0044715c
    TEST ECX,ECX                        ; 00447162
    JNZ 0x00447217                      ; 00447164
        ;   XREF to: 00447217 (CONDITIONAL_JUMP)  ; LAB_00447217
    MOV dword ptr [ESP + 0x40],ECX      ; 0044716a
    LEA EBX,[EAX + 0x20]                ; 0044716e
    MOV dword ptr [ESP + 0x3c],ECX      ; 00447171
    MOV EAX,[0x0061b5a8]                ; 00447175 | g_CDemonSetPtr
        ;   Label: LAB_00447175
    MOV EDX,dword ptr [ESP + 0x40]      ; 0044717a
    CMP EDX,dword ptr [EAX + 0x14d164]  ; 0044717e
    JGE 0x00447217                      ; 00447184
        ;   XREF to: 00447217 (CONDITIONAL_JUMP)  ; LAB_00447217
    MOV EDX,dword ptr [ESP + 0x3c]      ; 0044718a
    FLD float ptr [EBX]                 ; 0044718e
    ADD EAX,EDX                         ; 00447190
    FLD float ptr [EBX + 0x4]           ; 00447192
    MOV EDX,dword ptr [EAX + 0x14d168]  ; 00447195
    FLD float ptr [EBX + 0x8]           ; 0044719b
    LEA EAX,[EDX + 0x20]                ; 0044719e
    LEA EDI,[ESP + 0xc]                 ; 004471a1
    LEA ESI,[ESP + 0x24]                ; 004471a5
    FXCH ST2                            ; 004471a9
    FSUB float ptr [EAX]                ; 004471ab
    FXCH                                ; 004471ad
    FSUB float ptr [EAX + 0x4]          ; 004471af
    FXCH ST2                            ; 004471b2
    FSUB float ptr [EAX + 0x8]          ; 004471b4
    FXCH                                ; 004471b7
    FSTP float ptr [ESP + 0x24]         ; 004471b9
    FXCH                                ; 004471bd
    FSTP float ptr [ESP + 0x28]         ; 004471bf
    FSTP float ptr [ESP + 0x2c]         ; 004471c3
    MOVSD ES:EDI,ESI                    ; 004471c7
    MOVSD ES:EDI,ESI                    ; 004471c8
    MOVSD ES:EDI,ESI                    ; 004471c9
    FLD float ptr [ESP + 0x10]          ; 004471ca
    FMUL ST0                            ; 004471ce
    FLD float ptr [ESP + 0xc]           ; 004471d0
    FMUL ST0                            ; 004471d4
    FADDP                               ; 004471d6
    FLD float ptr [ESP + 0x14]          ; 004471d8
    FMUL ST0                            ; 004471dc
    FADDP                               ; 004471de
    FSQRT                               ; 004471e0
    FCOMP double ptr [0x005cea62]       ; 004471e2 | DAT_005cea62
    FNSTSW AX                           ; 004471e8
    SAHF                                ; 004471ea
    JC 0x00447206                       ; 004471eb
        ;   XREF to: 00447206 (CONDITIONAL_JUMP)  ; LAB_00447206
    MOV EDI,dword ptr [ESP + 0x40]      ; 004471ed
        ;   Label: LAB_004471ed
    MOV ESI,dword ptr [ESP + 0x3c]      ; 004471f1
    INC EDI                             ; 004471f5
    ADD ESI,0x4                         ; 004471f6
    MOV dword ptr [ESP + 0x40],EDI      ; 004471f9
    MOV dword ptr [ESP + 0x3c],ESI      ; 004471fd
    JMP 0x00447175                      ; 00447201
        ;   XREF to: 00447175 (UNCONDITIONAL_JUMP)  ; LAB_00447175
    PUSH EDX                            ; 00447206
        ;   Label: LAB_00447206
    MOV ECX,dword ptr [EBP + 0x14]      ; 00447207
    PUSH ECX                            ; 0044720a
    CALL core_dest.cpp_FUN_004473f0     ; 0044720b
        ;   XREF to: 004473f0 (UNCONDITIONAL_CALL)  ; int core_dest.cpp_FUN_004473f0(CActorDestination * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 00447210
    TEST EAX,EAX                        ; 00447213
    JZ 0x004471ed                       ; 00447215
        ;   XREF to: 004471ed (CONDITIONAL_JUMP)  ; LAB_004471ed
    MOV EAX,dword ptr [EBP + 0x14]      ; 00447217
        ;   Label: LAB_00447217
    MOV EDX,dword ptr [EAX + 0x2b4]     ; 0044721a
    TEST EDX,EDX                        ; 00447220
    JZ 0x004472ec                       ; 00447222
        ;   XREF to: 004472ec (CONDITIONAL_JUMP)  ; LAB_004472ec
    MOV EAX,EDX                         ; 00447228
    LEA EDI,[ESP + 0x18]                ; 0044722a
    LEA ESI,[ESP + 0x30]                ; 0044722e
    FLD float ptr [EAX + 0x24]          ; 00447232
    FLD float ptr [EAX + 0x28]          ; 00447235
    MOV EDX,dword ptr [EBP + 0x14]      ; 00447238
    FLD float ptr [EAX + 0x20]          ; 0044723b
    MOV EAX,ESP                         ; 0044723e
    FSUB float ptr [EDX + 0x20]         ; 00447240
    FXCH ST2                            ; 00447243
    FSUB float ptr [EDX + 0x24]         ; 00447245
    FXCH                                ; 00447248
    FSUB float ptr [EDX + 0x28]         ; 0044724a
    FXCH ST2                            ; 0044724d
    FSTP float ptr [ESP + 0x30]         ; 0044724f
    FSTP float ptr [ESP + 0x34]         ; 00447253
    FSTP float ptr [ESP + 0x38]         ; 00447257
    LEA EDX,[ESP + 0x18]                ; 0044725b
    MOVSD ES:EDI,ESI                    ; 0044725f
    MOVSD ES:EDI,ESI                    ; 00447260
    MOVSD ES:EDI,ESI                    ; 00447261
    CMP EAX,EDX                         ; 00447262
    JNZ 0x00447300                      ; 00447264
        ;   XREF to: 00447300 (CONDITIONAL_JUMP)  ; LAB_00447300
    FLD float ptr [ESP]                 ; 0044726a
        ;   Label: LAB_0044726a
    FABS                                ; 0044726d
    FCOMP double ptr [0x005cea5a]       ; 0044726f | DAT_005cea5a
    FNSTSW AX                           ; 00447275
    SAHF                                ; 00447277
    JNC 0x00447325                      ; 00447278
        ;   XREF to: 00447325 (CONDITIONAL_JUMP)  ; LAB_00447325
    FLD float ptr [ESP + 0x4]           ; 0044727e
    FABS                                ; 00447282
    FCOMP double ptr [0x005cea5a]       ; 00447284 | DAT_005cea5a
    FNSTSW AX                           ; 0044728a
    SAHF                                ; 0044728c
    JNC 0x00447325                      ; 0044728d
        ;   XREF to: 00447325 (CONDITIONAL_JUMP)  ; LAB_00447325
    FLD float ptr [ESP + 0x8]           ; 00447293
    FABS                                ; 00447297
    FCOMP double ptr [0x005cea5a]       ; 00447299 | DAT_005cea5a
    FNSTSW AX                           ; 0044729f
    SAHF                                ; 004472a1
    JNC 0x00447325                      ; 004472a2
        ;   XREF to: 00447325 (CONDITIONAL_JUMP)  ; LAB_00447325
    MOV EDX,dword ptr [EBP + 0x14]      ; 004472a8
    MOV EAX,dword ptr [EBP + 0x14]      ; 004472ab
    MOV ECX,dword ptr [EDX + 0x348]     ; 004472ae
    ADD EAX,0x2e4                       ; 004472b4
    TEST ECX,ECX                        ; 004472b9
    JNZ 0x0044731c                      ; 004472bb
        ;   XREF to: 0044731c (CONDITIONAL_JUMP)  ; LAB_0044731c
    CMP dword ptr [EDX + 0x2e0],0x0     ; 004472bd
    JNZ 0x004472df                      ; 004472c4
        ;   XREF to: 004472df (CONDITIONAL_JUMP)  ; LAB_004472df
    CMP dword ptr [EDX + 0x34c],0x0     ; 004472c6
    JNZ 0x004472df                      ; 004472cd
        ;   XREF to: 004472df (CONDITIONAL_JUMP)  ; LAB_004472df
    PUSH EAX                            ; 004472cf
    MOV EDI,dword ptr [0x006141f0]      ; 004472d0 | DAT_006141f0
    PUSH EDI                            ; 004472d6
    CALL core_event.cpp_CEventList_executeCommands_FUN_004894f0 ; 004472d7
        ;   XREF to: 004894f0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_executeCommands_FUN_004894f0(CEventList * this_ptr, char * commands)
        ;   Label: LAB_004472d7
    ADD ESP,0x8                         ; 004472dc
    MOV EAX,dword ptr [EBP + 0x14]      ; 004472df
        ;   Label: LAB_004472df
    MOV dword ptr [EAX + 0x2e0],0x1     ; 004472e2
    MOV EAX,dword ptr [EBP + 0x14]      ; 004472ec
        ;   Label: LAB_004472ec
    MOV dword ptr [EAX + 0x34c],0x0     ; 004472ef
    MOV ESP,EBP                         ; 004472f9
    POP EBP                             ; 004472fb
    POP EDI                             ; 004472fc
    POP ESI                             ; 004472fd
    POP EBX                             ; 004472fe
    RET                                 ; 004472ff
    MOV EAX,dword ptr [ESP + 0x18]      ; 00447300
        ;   Label: LAB_00447300
    MOV dword ptr [ESP],EAX             ; 00447304
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00447307
    MOV dword ptr [ESP + 0x4],EAX       ; 0044730b
    MOV EAX,dword ptr [ESP + 0x20]      ; 0044730f
    MOV dword ptr [ESP + 0x8],EAX       ; 00447313
    JMP 0x0044726a                      ; 00447317
        ;   XREF to: 0044726a (UNCONDITIONAL_JUMP)  ; LAB_0044726a
    PUSH EAX                            ; 0044731c
        ;   Label: LAB_0044731c
    MOV EAX,[0x006141f0]                ; 0044731d | DAT_006141f0
    PUSH EAX                            ; 00447322
    JMP 0x004472d7                      ; 00447323
        ;   XREF to: 004472d7 (UNCONDITIONAL_JUMP)  ; LAB_004472d7
    MOV EAX,dword ptr [EBP + 0x14]      ; 00447325
        ;   Label: LAB_00447325
    MOV dword ptr [EAX + 0x2e0],0x0     ; 00447328
    MOV EAX,dword ptr [EBP + 0x14]      ; 00447332
    MOV dword ptr [EAX + 0x34c],0x0     ; 00447335
    MOV ESP,EBP                         ; 0044733f
    POP EBP                             ; 00447341
    POP EDI                             ; 00447342
    POP ESI                             ; 00447343
    POP EBX                             ; 00447344
    RET                                 ; 00447345

