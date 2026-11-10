; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_manpuz_cpp_CMansionPuzzleCircle_initPuzzleState_FUN_004e6010(CMansionPuzzleCircle *this_ptr)
;
; Parameters:
; CMansionPuzzleCircle * Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   core_manpuz.cpp_CMansionPuzzleCircle_ctor_FUN_004e4f30 at 004e5065
;
; Called Functions:
;   core_manpuz.cpp_CMansionPuzzleCircle_getPanelColor_FUN_004e6a50
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e6010
        ;   Label: core_manpuz.cpp_CMansionPuzzleCircle_initPuzzleState_FUN_004e6010
    PUSH ESI                            ; 004e6011
    PUSH EDI                            ; 004e6012
    PUSH EBP                            ; 004e6013
    SUB ESP,0x4                         ; 004e6014
    MOV EAX,dword ptr [ESP + 0x18]      ; 004e6017
    MOV EBX,EAX                         ; 004e601b
    LEA ESI,[EAX + 0x30]                ; 004e601d
    MOV dword ptr [EBX + 0x750],0x0     ; 004e6020
        ;   Label: LAB_004e6020
    MOV dword ptr [EBX + 0x754],0x0     ; 004e602a
    MOV dword ptr [EBX + 0x798],0x0     ; 004e6034
    MOV dword ptr [EBX + 0x79c],0x0     ; 004e603e
    MOV dword ptr [EBX + 0x7a0],0x0     ; 004e6048
    ADD EAX,0x4                         ; 004e6052
    MOV dword ptr [EBX + 0x74c],0x1     ; 004e6055
    MOV dword ptr [EAX + 0x1558],0x0    ; 004e605f
    MOV dword ptr [EAX + 0x1588],0x0    ; 004e6069
    MOV dword ptr [EAX + 0x15b8],0x0    ; 004e6073
    ADD EBX,0x64                        ; 004e607d
    MOV dword ptr [EAX + 0x15e8],0x0    ; 004e6080
    CMP EAX,ESI                         ; 004e608a
    JNZ 0x004e6020                      ; 004e608c
        ;   XREF to: 004e6020 (CONDITIONAL_JUMP)  ; LAB_004e6020
    MOV EAX,dword ptr [ESP + 0x18]      ; 004e608e
    MOV dword ptr [EAX + 0x7a0],0xff    ; 004e6092
    MOV EBX,dword ptr [ESP + 0x18]      ; 004e609c
    MOV EAX,dword ptr [EAX + 0x7a0]     ; 004e60a0
    MOV dword ptr [EBX + 0x7fc],0xff    ; 004e60a6
    MOV dword ptr [EBX + 0x860],0xff    ; 004e60b0
    MOV dword ptr [EBX + 0x878],0x0     ; 004e60ba
    MOV dword ptr [EBX + 0x928],0xff    ; 004e60c4
    MOV dword ptr [EBX + 0x994],0xff    ; 004e60ce
    MOV dword ptr [EBX + 0x9a4],0x0     ; 004e60d8
    MOV dword ptr [EBX + 0xa54],0xff    ; 004e60e2
    MOV dword ptr [EBX + 0xac0],0xff    ; 004e60ec
    MOV dword ptr [EBX + 0xb1c],0xff    ; 004e60f6
    MOV dword ptr [EBX + 0xb88],0xff    ; 004e6100
    MOV dword ptr [EBX + 0xbec],0xff    ; 004e610a
    MOV dword ptr [EBX + 0x15bc],0xff   ; 004e6114
    MOV dword ptr [EBX + 0x15c0],0xff   ; 004e611e
    MOV dword ptr [EBX + 0x1564],0xff   ; 004e6128
    MOV dword ptr [EBX + 0x1568],0xff   ; 004e6132
    MOV dword ptr [EBX + 0x15cc],0xff   ; 004e613c
    MOV dword ptr [EBX + 0x1570],0xff   ; 004e6146
    MOV dword ptr [EBX + 0x1574],0xff   ; 004e6150
    MOV dword ptr [EBX + 0x15d8],0xff   ; 004e615a
    MOV dword ptr [EBX + 0x15dc],0xff   ; 004e6164
    MOV dword ptr [EBX + 0x15e0],0xff   ; 004e616e
    MOV dword ptr [EBX + 0x1584],0xff   ; 004e6178
    MOV dword ptr [EBX + 0x798],EAX     ; 004e6182
    MOV EAX,dword ptr [EBX + 0x15bc]    ; 004e6188
    XOR ESI,ESI                         ; 004e618e
    MOV dword ptr [EBX + 0x155c],EAX    ; 004e6190
    LEA EAX,[EBX + 0xbfc]               ; 004e6196
    MOV dword ptr [EBX + 0x1588],0xff   ; 004e619c
    LEA EDI,[EBX + 0xc00]               ; 004e61a6
    MOV dword ptr [ESP],EAX             ; 004e61ac
    LEA EBP,[EBX + 0xc04]               ; 004e61af
    IMUL EBX,ESI,0xb8                   ; 004e61b5
        ;   Label: LAB_004e61b5
    PUSH EBP                            ; 004e61bb
    MOV EDX,dword ptr [ESP + 0x4]       ; 004e61bc
    PUSH EDI                            ; 004e61c0
    ADD EBX,EDX                         ; 004e61c1
    PUSH EBX                            ; 004e61c3
    PUSH ESI                            ; 004e61c4
    MOV ECX,dword ptr [ESP + 0x28]      ; 004e61c5
    PUSH ECX                            ; 004e61c9
    ADD EBP,0xb8                        ; 004e61ca
    ADD EDI,0xb8                        ; 004e61d0
    CALL core_manpuz.cpp_CMansionPuzzleCircle_getPanelColor_FUN_004e6a50 ; 004e61d6
        ;   XREF to: 004e6a50 (UNCONDITIONAL_CALL)  ; void core_manpuz.cpp_CMansionPuzzleCircle_getPanelColor_FUN_004e6a50(CMansionPuzzleCircle * this_ptr, int panel_index, float * out_r, float * out_g, ...)
    MOV dword ptr [EBX + 0x14],0x0      ; 004e61db
    INC ESI                             ; 004e61e2
    MOV dword ptr [EBX + 0x20],0x0      ; 004e61e3
    ADD ESP,0x14                        ; 004e61ea
    FLD float ptr [EBX + 0x20]          ; 004e61ed
    MOV EAX,dword ptr [EBX + 0x14]      ; 004e61f0
    MOV dword ptr [EBX + 0x10],EAX      ; 004e61f3
    FST float ptr [EBX + 0x1c]          ; 004e61f6
    MOV EAX,dword ptr [EBX + 0x10]      ; 004e61f9
    MOV dword ptr [EBX + 0xc],EAX       ; 004e61fc
    FSTP float ptr [EBX + 0x18]         ; 004e61ff
    CMP ESI,0xc                         ; 004e6202
    JL 0x004e61b5                       ; 004e6205
        ;   XREF to: 004e61b5 (CONDITIONAL_JUMP)  ; LAB_004e61b5
    MOV EAX,dword ptr [ESP + 0x18]      ; 004e6207
    MOV dword ptr [EAX + 0x14f8],0x1    ; 004e620b
    MOV dword ptr [EAX + 0x1514],0x0    ; 004e6215
    MOV dword ptr [EAX + 0x1558],0xb    ; 004e621f
    MOV dword ptr [EAX + 0x14b4],0x0    ; 004e6229
    ADD ESP,0x4                         ; 004e6233
    POP EBP                             ; 004e6236
    POP EDI                             ; 004e6237
    POP ESI                             ; 004e6238
    POP EBX                             ; 004e6239
    RET                                 ; 004e623a

