; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_set_cpp_CDemonSet_FUN_00570960(CDemonSet *this_ptr,SMRGLHeaderPrimitive *prim,int count)
;
; Parameters:
; CDemonSet *      Stack[0x4]:4   this_ptr
; SMRGLHeaderPrimitive * Stack[0x8]:4   prim
; int              Stack[0xc]:4   count
;
; XREF[1]:
;   core_dpart.cpp_CDemonPart_renderFaces_FUN_004828b0 at 004829f2
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00570960
        ;   Label: core_set.cpp_CDemonSet_FUN_00570960
    PUSH ESI                            ; 00570961
    PUSH EDI                            ; 00570962
    PUSH EBP                            ; 00570963
    MOV EBP,dword ptr [ESP + 0x14]      ; 00570964
    MOV EAX,dword ptr [ESP + 0x18]      ; 00570968
    MOV EDI,dword ptr [ESP + 0x1c]      ; 0057096c

