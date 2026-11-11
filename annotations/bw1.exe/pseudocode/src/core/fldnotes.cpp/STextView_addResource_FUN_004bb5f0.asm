; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fldnotes_cpp_STextView_addResource_FUN_004bb5f0(STextView *this_ptr,int param_2)
;
; Parameters:
; STextView *      Stack[0x4]:4   this_ptr
; undefined4       Stack[0x8]:4   param_2
;
; XREF[3]:
;   core_fldnotes.cpp_STextView_flushWord_FUN_004bb570 at 004bb5de
;   core_fldnotes.cpp_STextView_handleTag_FUN_004bb6f0 at 004bb8b3
;   core_fldnotes.cpp_STextView_placeResource_FUN_004bb510 at 004bb551
;
; Called Functions:
;   core_fldnotes.cpp_STextPage_addResource_FUN_004bb0c0
;   core_fldnotes.cpp_STextView_ensurePage_FUN_004bbbf0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004bb5f0
        ;   Label: core_fldnotes.cpp_STextView_addResource_FUN_004bb5f0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004bb5f1
    PUSH EBX                            ; 004bb5f5
    CALL core_fldnotes.cpp_STextView_ensurePage_FUN_004bbbf0 ; 004bb5f6
        ;   XREF to: 004bbbf0 (UNCONDITIONAL_CALL)  ; void core_fldnotes.cpp_STextView_ensurePage_FUN_004bbbf0(STextView * this_ptr)
    ADD ESP,0x4                         ; 004bb5fb
    MOV EDX,dword ptr [ESP + 0xc]       ; 004bb5fe
    PUSH EDX                            ; 004bb602
    MOV EDX,dword ptr [EBX + 0x10]      ; 004bb603
    LEA EAX,[EDX*0x4 + 0x0]             ; 004bb606
    ADD EAX,EDX                         ; 004bb60d
    SHL EAX,0x4                         ; 004bb60f
    ADD EAX,EDX                         ; 004bb612
    SHL EAX,0x2                         ; 004bb614
    MOV EDX,dword ptr [EBX + 0x3c]      ; 004bb617
    ADD EAX,EDX                         ; 004bb61a
    PUSH EAX                            ; 004bb61c
    CALL core_fldnotes.cpp_STextPage_addResource_FUN_004bb0c0 ; 004bb61d
        ;   XREF to: 004bb0c0 (UNCONDITIONAL_CALL)  ; void core_fldnotes.cpp_STextPage_addResource_FUN_004bb0c0(STextPage * this_ptr, int param_2)
    ADD ESP,0x8                         ; 004bb622
    POP EBX                             ; 004bb625
    RET                                 ; 004bb626

