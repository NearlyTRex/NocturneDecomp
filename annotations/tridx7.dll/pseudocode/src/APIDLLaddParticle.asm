; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl APIDLLaddParticle(void *particle_data,int particle_type)
;
; Parameters:
; void *           Stack[0x4]:4   particle_data
; int              Stack[0x8]:4   particle_type
;
; *****************************************************************************

section .text

    XOR EAX,EAX                         ; 10004800
        ;   Label: APIDLLaddParticle
    RET                                 ; 10004802

