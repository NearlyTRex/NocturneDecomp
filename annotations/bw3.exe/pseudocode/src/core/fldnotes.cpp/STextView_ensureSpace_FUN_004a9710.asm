; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_fldnotes_cpp_STextView_ensureSpace_FUN_004a9710(STextView *this_ptr,int width,int height)
;
; Parameters:
; STextView *      Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   width
; int              Stack[0xc]:4   height
;
; XREF[2]:
;   core_fldnotes.cpp_STextView_handleTag_FUN_004a9330 at 004a9470
;   core_fldnotes.cpp_STextView_placeResource_FUN_004a9150 at 004a916c
;
; Called Functions:
;   core_fldnotes.cpp_STextView_newLine_FUN_004a9270
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a9710
        ;   Label: core_fldnotes.cpp_STextView_ensureSpace_FUN_004a9710
    PUSH ESI                            ; 004a9711
    PUSH EDI                            ; 004a9712
    PUSH EBP                            ; 004a9713
    MOV EBX,dword ptr [ESP + 0x14]      ; 004a9714
    MOV ESI,dword ptr [ESP + 0x18]      ; 004a9718
    MOV EDI,dword ptr [ESP + 0x1c]      ; 004a971c
    MOV EDX,dword ptr [EBX + 0x20]      ; 004a9720
        ;   Label: LAB_004a9720
    MOV EAX,dword ptr [EBX + 0x18]      ; 004a9723
    CMP EAX,EDX                         ; 004a9726
    JLE 0x004a9733                      ; 004a9728
        ;   XREF to: 004a9733 (CONDITIONAL_JUMP)  ; LAB_004a9733
    MOV ECX,dword ptr [EBX + 0x28]      ; 004a972a
    ADD EAX,EDI                         ; 004a972d
    CMP EAX,ECX                         ; 004a972f
    JG 0x004a9751                       ; 004a9731
        ;   XREF to: 004a9751 (CONDITIONAL_JUMP)  ; LAB_004a9751
    MOV EBP,dword ptr [EBX + 0x1c]      ; 004a9733
        ;   Label: LAB_004a9733
    MOV EAX,dword ptr [EBX + 0x14]      ; 004a9736
    CMP EAX,EBP                         ; 004a9739
    JZ 0x004a9758                       ; 004a973b
        ;   XREF to: 004a9758 (CONDITIONAL_JUMP)  ; LAB_004a9758
    MOV EDX,dword ptr [EBX + 0x24]      ; 004a973d
    ADD EAX,ESI                         ; 004a9740
    CMP EAX,EDX                         ; 004a9742
    JLE 0x004a9758                      ; 004a9744
        ;   XREF to: 004a9758 (CONDITIONAL_JUMP)  ; LAB_004a9758
    PUSH EBX                            ; 004a9746
    CALL core_fldnotes.cpp_STextView_newLine_FUN_004a9270 ; 004a9747
        ;   XREF to: 004a9270 (UNCONDITIONAL_CALL)  ; void core_fldnotes.cpp_STextView_newLine_FUN_004a9270(STextView * this_ptr)
    ADD ESP,0x4                         ; 004a974c
    JMP 0x004a9720                      ; 004a974f
        ;   XREF to: 004a9720 (UNCONDITIONAL_JUMP)  ; LAB_004a9720
    XOR EAX,EAX                         ; 004a9751
        ;   Label: LAB_004a9751
    POP EBP                             ; 004a9753
    POP EDI                             ; 004a9754
    POP ESI                             ; 004a9755
    POP EBX                             ; 004a9756
    RET                                 ; 004a9757
    MOV EAX,0x1                         ; 004a9758
        ;   Label: LAB_004a9758
    POP EBP                             ; 004a975d
    POP EDI                             ; 004a975e
    POP ESI                             ; 004a975f
    POP EBX                             ; 004a9760
    RET                                 ; 004a9761

