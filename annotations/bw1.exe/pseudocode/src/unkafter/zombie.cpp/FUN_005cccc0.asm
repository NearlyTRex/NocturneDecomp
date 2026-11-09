; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int unkafter_zombie_cpp_FUN_005cccc0(void)
;
;
; XREF[2]:
;   unkafter_zombie.cpp_FUN_005ca868 at 005ca86e
;   unkafter_zombie.cpp_FUN_005ca8a4 at 005ca8ad
;
; Referenced Globals:
;   void* PTR_crt_unknown.c_FUN_005c50cc_006265fc = 005c50cc
;
; *****************************************************************************

section .text

    CALL dword ptr [0x006265fc]         ; 005cccc0 | PTR_crt_unknown.c_FUN_005c50cc_006265fc
        ;   Label: unkafter_zombie.cpp_FUN_005cccc0
    ADD EAX,0xc6                        ; 005cccc6
    RET                                 ; 005ccccb

