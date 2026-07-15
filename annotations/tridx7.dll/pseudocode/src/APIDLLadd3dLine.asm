; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl APIDLLadd3dLine(void *start_point,void *end_point,int line_style)
;
; Parameters:
; void *           Stack[0x4]:4   start_point
; void *           Stack[0x8]:4   end_point
; int              Stack[0xc]:4   line_style
;
; *****************************************************************************

section .text

    XOR EAX,EAX                         ; 10004820
        ;   Label: APIDLLadd3dLine
    RET                                 ; 10004822

