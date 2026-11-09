; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_manpuz_cpp_FUN_004e7580(CMansionPuzzleCircle *this_ptr,int reflector_index,float delta_time)
;
; Parameters:
; CMansionPuzzleCircle * Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   reflector_index
; float            Stack[0xc]:4   delta_time
;
; XREF[1]:
;   core_manpuz.cpp_FUN_004e57f0 at 004e582d
;
; Referenced Globals:
;   undefined4 DAT_005f98cc
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 004e7580
        ;   Label: core_manpuz.cpp_FUN_004e7580
    LEA EAX,[EDX*0x4 + 0x0]             ; 004e7584
    SUB EAX,EDX                         ; 004e758b
    MOV EDX,dword ptr [ESP + 0x4]       ; 004e758d
    SHL EAX,0x5                         ; 004e7591
    ADD EDX,0x149c                      ; 004e7594
    ADD EDX,EAX                         ; 004e759a
    MOV ECX,dword ptr [EDX + 0x5c]      ; 004e759c
    LEA EAX,[ECX*0x4 + 0x0]             ; 004e759f
    SUB EAX,ECX                         ; 004e75a6
    SHL EAX,0x3                         ; 004e75a8
    ADD EAX,ECX                         ; 004e75ab
    MOV ECX,dword ptr [ESP + 0x4]       ; 004e75ad
    CMP dword ptr [ECX + EAX*0x4 + 0x74c],0x0 ; 004e75b1
    JZ 0x004e75dd                       ; 004e75b9
        ;   XREF to: 004e75dd (CONDITIONAL_JUMP)  ; LAB_004e75dd
    FLD float ptr [ESP + 0xc]           ; 004e75bb
    FDIV float ptr [0x005f98cc]         ; 004e75bf | DAT_005f98cc
    FSUBR float ptr [EDX + 0x18]        ; 004e75c5
    FST float ptr [EDX + 0x18]          ; 004e75c8
    FLDZ                                ; 004e75cb
    FCOMPP                              ; 004e75cd
    FNSTSW AX                           ; 004e75cf
    SAHF                                ; 004e75d1
    JA 0x004e75d5                       ; 004e75d2
        ;   XREF to: 004e75d5 (CONDITIONAL_JUMP)  ; LAB_004e75d5
    RET                                 ; 004e75d4
        ;   Label: LAB_004e75d4
    MOV dword ptr [EDX + 0x18],0x0      ; 004e75d5
        ;   Label: LAB_004e75d5
    RET                                 ; 004e75dc
    FLD float ptr [ESP + 0xc]           ; 004e75dd
        ;   Label: LAB_004e75dd
    FDIV float ptr [0x005f98cc]         ; 004e75e1 | DAT_005f98cc
    FADD float ptr [EDX + 0x18]         ; 004e75e7
    FST float ptr [EDX + 0x18]          ; 004e75ea
    FLD1                                ; 004e75ed
    FCOMPP                              ; 004e75ef
    FNSTSW AX                           ; 004e75f1
    SAHF                                ; 004e75f3
    JNC 0x004e75d4                      ; 004e75f4
        ;   XREF to: 004e75d4 (CONDITIONAL_JUMP)  ; LAB_004e75d4
    MOV dword ptr [EDX + 0x18],0x3f800000 ; 004e75f6
    RET                                 ; 004e75fd

