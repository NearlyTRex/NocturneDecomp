; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined8 unkafter_zombie_cpp_FUN_005cc0e8(void)
;
;
; Referenced Globals:
;   undefined4 DAT_00628cfc
;
; *****************************************************************************

section .text

    FLD extended double ptr [0x00628cfc] ; 005cc0e8 | DAT_00628cfc
        ;   Label: unkafter_zombie.cpp_FUN_005cc0e8
    FSUBRP                              ; 005cc0ee
    FLDCW word ptr [ESP + 0x18]         ; 005cc0f0
    ADD ESP,0x24                        ; 005cc0f4
    POP EDX                             ; 005cc0f7
    POP ECX                             ; 005cc0f8
    POP EAX                             ; 005cc0f9
    RET                                 ; 005cc0fa

