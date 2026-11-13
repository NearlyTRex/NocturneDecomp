; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_fldnotes_cpp_STextView_addResource_FUN_004a9230(STextView *this_ptr,SPageResource *resource)
;
; Parameters:
; STextView *      Stack[0x4]:4   this_ptr
; SPageResource *  Stack[0x8]:4   resource
;
; XREF[3]:
;   core_fldnotes.cpp_STextView_flushWord_FUN_004a91b0 at 004a921e
;   core_fldnotes.cpp_STextView_handleTag_FUN_004a9330 at 004a94f3
;   core_fldnotes.cpp_STextView_placeResource_FUN_004a9150 at 004a9191
;
; Called Functions:
;   core_fldnotes.cpp_STextPage_addResource_FUN_004a8d00
;   core_fldnotes.cpp_STextView_ensurePage_FUN_004a9830
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a9230
        ;   Label: core_fldnotes.cpp_STextView_addResource_FUN_004a9230
    MOV EBX,dword ptr [ESP + 0x8]       ; 004a9231
    PUSH EBX                            ; 004a9235
    CALL core_fldnotes.cpp_STextView_ensurePage_FUN_004a9830 ; 004a9236
        ;   XREF to: 004a9830 (UNCONDITIONAL_CALL)  ; void core_fldnotes.cpp_STextView_ensurePage_FUN_004a9830(STextView * this_ptr)
    ADD ESP,0x4                         ; 004a923b
    MOV EDX,dword ptr [ESP + 0xc]       ; 004a923e
    PUSH EDX                            ; 004a9242
    MOV EDX,dword ptr [EBX + 0x10]      ; 004a9243
    LEA EAX,[EDX*0x4 + 0x0]             ; 004a9246
    ADD EAX,EDX                         ; 004a924d
    SHL EAX,0x4                         ; 004a924f
    ADD EAX,EDX                         ; 004a9252
    SHL EAX,0x2                         ; 004a9254
    MOV EDX,dword ptr [EBX + 0x3c]      ; 004a9257
    ADD EAX,EDX                         ; 004a925a
    PUSH EAX                            ; 004a925c
    CALL core_fldnotes.cpp_STextPage_addResource_FUN_004a8d00 ; 004a925d
        ;   XREF to: 004a8d00 (UNCONDITIONAL_CALL)  ; void core_fldnotes.cpp_STextPage_addResource_FUN_004a8d00(STextPage * this_ptr, SPageResource * resource)
    ADD ESP,0x8                         ; 004a9262
    POP EBX                             ; 004a9265
    RET                                 ; 004a9266

